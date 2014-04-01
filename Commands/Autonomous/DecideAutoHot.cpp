#include "DecideAutoHot.h"

DecideAutoHot::DecideAutoHot() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
	SetTimeout(1);
}

// Called just before this Command runs the first time
void DecideAutoHot::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void DecideAutoHot::Execute() {
	shooter->DecideHot();
}

// Make this return true when this Command no longer needs to run execute()
bool DecideAutoHot::IsFinished() {
	return IsTimedOut() || shooter->GetHot();
}

// Called once after isFinished returns true
void DecideAutoHot::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DecideAutoHot::Interrupted() {
}
