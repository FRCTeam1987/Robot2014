#include "EngageShooterBrake.h"

EngageShooterBrake::EngageShooterBrake() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void EngageShooterBrake::Initialize() {
//	printf("IsBrakeEngaged: %s\n", shooter->IsBrakeEngaged()?"Yes":"No");
//	printf("Pot Value: %d\n", shooter->GetPositionSensor());
}

// Called repeatedly when this Command is scheduled to run
void EngageShooterBrake::Execute() {
	shooter->EngageBrake("EngageShooterBrake::Execute()");
//	printf("IsBrakeEngaged : %s \n",
//			shooter->IsBrakeEngaged()?"Yes":"No");
	printf("Shooter Position : %d \n", shooter->GetPositionSensor());
	
}

// Make this return true when this Command no longer needs to run execute()
bool EngageShooterBrake::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void EngageShooterBrake::End() {
//	printf("IsBrakeEngaged: %s\n", shooter->IsBrakeEngaged()?"Yes":"No");	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void EngageShooterBrake::Interrupted() {
}
