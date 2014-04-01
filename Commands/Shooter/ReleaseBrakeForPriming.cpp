#include "ReleaseBrakeForPriming.h"

ReleaseBrakeForPriming::ReleaseBrakeForPriming() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void ReleaseBrakeForPriming::Initialize() {
	shooter->ReleaseBrake();
}

// Called repeatedly when this Command is scheduled to run
void ReleaseBrakeForPriming::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseBrakeForPriming::IsFinished() {
	return shooter->IsBrakeEngaged() == false;
}

// Called once after isFinished returns true
void ReleaseBrakeForPriming::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseBrakeForPriming::Interrupted() {
}
