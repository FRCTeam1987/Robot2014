#include "RaiseIntakeArm.h"
#include "../../Subsystems/Intake.h"

RaiseIntakeArm::RaiseIntakeArm() {
	Requires(intake);
}

// Called just before this Command runs the first time
void RaiseIntakeArm::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RaiseIntakeArm::Execute() {
	intake->RaiseIntakeArm();
}

// Make this return true when this Command no longer needs to run execute()
bool RaiseIntakeArm::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void RaiseIntakeArm::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RaiseIntakeArm::Interrupted() {
}
