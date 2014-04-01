#include "EngageShooterLatch.h"

EngageShooterLatch::EngageShooterLatch() {
	Requires(shooter);
	Requires(intake);
}

// Called just before this Command runs the first time
void EngageShooterLatch::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void EngageShooterLatch::Execute() {
	// Can't relatch with a ball in the robot
	if(intake->HasBall())
		return;
	
	shooter->EngageLatch();
}

// Make this return true when this Command no longer needs to run execute()
bool EngageShooterLatch::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void EngageShooterLatch::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void EngageShooterLatch::Interrupted() {
}
