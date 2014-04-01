#include "StopIntakeMotor.h"

StopIntakeMotor::StopIntakeMotor() {
	Requires(intake);
}

// Called just before this Command runs the first time
void StopIntakeMotor::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void StopIntakeMotor::Execute() {
	intake->StopIntakeMotor();
//	printf("In StopIntakeMotor::Execute()\n");
}

// Make this return true when this Command no longer needs to run execute()
bool StopIntakeMotor::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void StopIntakeMotor::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StopIntakeMotor::Interrupted() {
}
