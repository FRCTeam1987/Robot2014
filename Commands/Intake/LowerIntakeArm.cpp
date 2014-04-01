#include "LowerIntakeArm.h"
#include "../../Subsystems/Intake.h"

LowerIntakeArm::LowerIntakeArm() {
	Requires(intake);
}

// Called just before this Command runs the first time
void LowerIntakeArm::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void LowerIntakeArm::Execute() {
	intake->LowerIntakeArm();
}

// Make this return true when this Command no longer needs to run execute()
bool LowerIntakeArm::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void LowerIntakeArm::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LowerIntakeArm::Interrupted() {
}
