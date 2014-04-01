#include "StopWinchMotor.h"

StopWinchMotor::StopWinchMotor() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void StopWinchMotor::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void StopWinchMotor::Execute() {
	shooter->StopDriveMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool StopWinchMotor::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void StopWinchMotor::End() {
	shooter->StopDriveMotor();	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopWinchMotor::Interrupted() {
}
