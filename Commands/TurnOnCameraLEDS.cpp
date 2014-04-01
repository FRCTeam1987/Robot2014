#include "TurnOnCameraLEDS.h"
#include "../Subsystems/Shooter.h"

TurnOnCameraLEDS::TurnOnCameraLEDS() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void TurnOnCameraLEDS::Initialize() {
	shooter->TurnOnCameraLEDS();	
}

// Called repeatedly when this Command is scheduled to run
void TurnOnCameraLEDS::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool TurnOnCameraLEDS::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void TurnOnCameraLEDS::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnOnCameraLEDS::Interrupted() {
}
