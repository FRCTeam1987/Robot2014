#include "AutoShootIf.h"

AutoShootIf::AutoShootIf() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
	Requires(eyecandy);
	SetTimeout(1);
}

// Called just before this Command runs the first time
void AutoShootIf::Initialize() {	
}

// Called repeatedly when this Command is scheduled to run
void AutoShootIf::Execute() {
	shooter->DecideHot();
}

// Make this return true when this Command no longer needs to run execute()
bool AutoShootIf::IsFinished() {
	return IsTimedOut() || shooter->GetHot();
}

// Called once after isFinished returns true
void AutoShootIf::End() {
	if(shooter->GetHot() == true){
		shooter->ReleaseLatch();
		eyecandy->ShootPattern();
	}
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoShootIf::Interrupted() {
}
