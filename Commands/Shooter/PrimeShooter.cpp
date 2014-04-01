#include "PrimeShooter.h"
#include "../../Robotmap.h"

PrimeShooter::PrimeShooter(Shooter::SHOOTER_POSITION pos) {
	Requires(shooter);
	Requires(eyecandy);
	desiredPosition = pos;
}

// Called just before this Command runs the first time
void PrimeShooter::Initialize() {
	if(desiredPosition != shooter->GetCurrentSetPoint())
	{
		if(shooter->IsBrakeEngaged()){
			printf("Brake engaged - releasing (from PrimeShooter::Initialize()\n");
			shooter->ReleaseBrake();
		}
//		else
//			printf("brake not engaged: %lu\n", shooter->brakeSensor->Get());
	}
	
	printf("Pot Position %d\n", shooter->GetPositionSensor());
}

// Called repeatedly when this Command is scheduled to run
void PrimeShooter::Execute() {
	if(shooter->IsDisabled() == true)
		return;
	
	// If the brake is engaged, do nothing
	if(shooter->IsBrakeEngaged())
	{
		printf("Prime Execute: Brake Engaged\n");
		return;
	}
	
	// Already in the desired position?
	Shooter::SHOOTER_POSITION currentSetPoint = shooter->GetCurrentSetPoint();
	if(currentSetPoint == desiredPosition)
		return;
	
	int posPrimedGoal = shooter->GetPosPrimedGoal();
	int posPrimedTruss = shooter->GetPosPrimedTruss();
	int posUnprimed = shooter->GetPosUnprimed();
	
	if(//shooter->GetPositionSensor() > SHOOTER_POSITION_UNPRIMED + SHOOTER_POSITION_TOLERANCE ||
		shooter->GetPositionSensor() < posPrimedGoal - SHOOTER_POSITION_TOLERANCE){
		shooter->Disable();
		shooter->StopDriveMotor();
		shooter->ReleaseBrake();
		eyecandy->DisabledPattern();
		printf("Disabling -- PositionSensor:%d, posPrimedGoal:%d (%d<%d-%d)",
				shooter->GetPositionSensor(), posPrimedGoal,
				shooter->GetPositionSensor(), posPrimedGoal, SHOOTER_POSITION_TOLERANCE);
		return;
	}
	
	// Figure out in which direction the motor needs to drive
	int16_t desiredSensorPosition;
	switch(desiredPosition)
	{
	case Shooter::POSITION_GOAL:
		desiredSensorPosition = posPrimedGoal;
		break;
		
	case Shooter::POSITION_TRUSS:
		desiredSensorPosition = posPrimedTruss;
		break;
		
	case Shooter::POSITION_UNPRIMED:
		desiredSensorPosition = posUnprimed;
		break;
		
	default:
		desiredSensorPosition = shooter->GetPositionSensor();
		break;
	}

	// Figure out which direction the winch needs to move
	int16_t sensorPosition = shooter->GetPositionSensor();
	bool drivingForward = false;
	if(sensorPosition > desiredSensorPosition)
	{
		shooter->ForwardDriveMotor();
		drivingForward = true;
	}
	else if(sensorPosition < desiredSensorPosition)
		shooter->BackDriveMotor();
	
	// If the sensor shows the winch too low past the goal position - stop it
	if(drivingForward && sensorPosition < posPrimedGoal-SHOOTER_POSITION_TOLERANCE)
	{
		shooter->StopDriveMotor();
		char msg[100];
		sprintf(msg, "PrimeShooter::Execute() too low past the goal (%d)",
				sensorPosition);
//		shooter->EngageBrake(msg);
	}
	
	// If the sensor shows the winch too far past the unprimed position - stop it
	if(!drivingForward && sensorPosition > posUnprimed+SHOOTER_POSITION_TOLERANCE)
	{
		shooter->StopDriveMotor();
		char msg[100];
		sprintf(msg, "PrimeShooter::Execute() too far past unprimed (%d)",
				sensorPosition);
//		shooter->EngageBrake(msg);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool PrimeShooter::IsFinished() {
	return (shooter->GetCurrentSetPoint() == desiredPosition);
}

// Called once after isFinished returns true
void PrimeShooter::End() {
	shooter->StopDriveMotor();
//	shooter->EngageBrake("PrimeShooter::End()");
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PrimeShooter::Interrupted() {
	shooter->StopDriveMotor();
//	shooter->EngageBrake("PrimeShooter::Interrupted()");
}
