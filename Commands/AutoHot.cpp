#include "AutoHot.h"

AutoHot::AutoHot() {
	Requires(chassis);
}

// Called just before this Command runs the first time
void AutoHot::Initialize() {
	sawHot = false;
	chassis->TurnOnCameraLed();
}

// Called repeatedly when this Command is scheduled to run
void AutoHot::Execute() {
	
	if( sawHot == false && SmartDashboard::GetString("HOT") == "yes")
		sawHot = true;
}

// Make this return true when this Command no longer needs to run execute()
bool AutoHot::IsFinished() {
	return sawHot;
}

// Called once after isFinished returns true
void AutoHot::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoHot::Interrupted() {
}
