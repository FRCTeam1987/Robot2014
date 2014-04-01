#include "ReverseIntakeMotor.h"

ReverseIntakeMotor::ReverseIntakeMotor() {
	Requires(intake);
}

// Called just before this Command runs the first time
void ReverseIntakeMotor::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ReverseIntakeMotor::Execute() {
	intake->BackIntakeMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool ReverseIntakeMotor::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ReverseIntakeMotor::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReverseIntakeMotor::Interrupted() {
}
