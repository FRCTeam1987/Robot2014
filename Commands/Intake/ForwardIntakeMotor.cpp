#include "ForwardIntakeMotor.h"

ForwardIntakeMotor::ForwardIntakeMotor() {
	Requires(intake);
}

// Called just before this Command runs the first time
void ForwardIntakeMotor::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ForwardIntakeMotor::Execute() {
	intake->ForwardIntakeMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool ForwardIntakeMotor::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ForwardIntakeMotor::End() {
	intake->StopIntakeMotor();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ForwardIntakeMotor::Interrupted() {
	intake->StopIntakeMotor();
}
