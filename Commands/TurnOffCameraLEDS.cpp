#include "TurnOffCameraLEDS.h"

TurnOffCameraLEDS::TurnOffCameraLEDS() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void TurnOffCameraLEDS::Initialize() {
	shooter->TurnOffCameraLEDS();
}

// Called repeatedly when this Command is scheduled to run
void TurnOffCameraLEDS::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool TurnOffCameraLEDS::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void TurnOffCameraLEDS::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnOffCameraLEDS::Interrupted() {
}
