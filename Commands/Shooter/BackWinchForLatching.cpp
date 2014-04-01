#include "BackWinchForLatching.h"
#include "../../Robotmap.h"

BackWinchForLatching::BackWinchForLatching() {
	Requires(shooter);
	Requires(intake);
	Requires(eyecandy);
}

// Called just before this Command runs the first time
void BackWinchForLatching::Initialize() {
	if(shooter->IsBrakeEngaged())
		shooter->ReleaseBrake();
}

// Called repeatedly when this Command is scheduled to run
void BackWinchForLatching::Execute() {
	// Can't relatch with a ball in the robot
	if(intake->HasBall())
		return;
	
	int posPrimedGoal = shooter->GetPosPrimedGoal();
	
	if(//shooter->GetPositionSensor() > SHOOTER_POSITION_UNPRIMED + SHOOTER_POSITION_TOLERANCE ||
		shooter->GetPositionSensor() < posPrimedGoal - SHOOTER_POSITION_TOLERANCE){
		shooter->Disable();
		shooter->StopDriveMotor();
		shooter->ReleaseBrake();
		eyecandy->DisabledPattern();
		return;
	}
	
	shooter->BackDriveMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool BackWinchForLatching::IsFinished() {
	return shooter->GetBarSensor() || intake->HasBall();
}

// Called once after isFinished returns true
void BackWinchForLatching::End() {
	shooter->StopDriveMotor();
	shooter->EngageBrake("BackWinchForLatching::End()");
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BackWinchForLatching::Interrupted() {
	shooter->StopDriveMotor();
}
