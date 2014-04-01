#include "LowerArmForShooter.h"

LowerArmForShooter::LowerArmForShooter() {
	Requires(intake);
	SetTimeout(1);
}

// Called just before this Command runs the first time
void LowerArmForShooter::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void LowerArmForShooter::Execute() {
//	printf("In LowerArmForShooter::Execute()\n");
	intake->BackIntakeMotor();
	intake->LowerIntakeArm();
}

// Make this return true when this Command no longer needs to run execute()
bool LowerArmForShooter::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void LowerArmForShooter::End() {
	intake->StopIntakeMotor();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LowerArmForShooter::Interrupted() {
}
