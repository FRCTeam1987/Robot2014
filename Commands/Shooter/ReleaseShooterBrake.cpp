#include "ReleaseShooterBrake.h"

ReleaseShooterBrake::ReleaseShooterBrake() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void ReleaseShooterBrake::Initialize() {
	printf("IsBrakeEngaged: %s\n", shooter->IsBrakeEngaged()?"Yes":"No");	
}

// Called repeatedly when this Command is scheduled to run
void ReleaseShooterBrake::Execute() {
	shooter->ReleaseBrake();
//	printf("IsBrakeEngaged : %s \n",
//			shooter->IsBrakeEngaged()?"Yes":"No");
}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseShooterBrake::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ReleaseShooterBrake::End() {
	printf("IsBrakeEngaged: %s\n", shooter->IsBrakeEngaged()?"Yes":"No");	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseShooterBrake::Interrupted() {
}
