#include "ForwardWinchMotor.h"

ForwardWinchMotor::ForwardWinchMotor() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void ForwardWinchMotor::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ForwardWinchMotor::Execute() {
	shooter->ForwardDriveMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool ForwardWinchMotor::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ForwardWinchMotor::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ForwardWinchMotor::Interrupted() {
}
