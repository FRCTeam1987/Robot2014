#include "BackWinchMotor.h"

BackWinchMotor::BackWinchMotor() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void BackWinchMotor::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void BackWinchMotor::Execute() {
	shooter->BackDriveMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool BackWinchMotor::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void BackWinchMotor::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BackWinchMotor::Interrupted() {
}
