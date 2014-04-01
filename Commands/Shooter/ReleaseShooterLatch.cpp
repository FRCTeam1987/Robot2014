#include "ReleaseShooterLatch.h"

ReleaseShooterLatch::ReleaseShooterLatch() {
	Requires(shooter);
	Requires(eyecandy);
}

// Called just before this Command runs the first time
void ReleaseShooterLatch::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ReleaseShooterLatch::Execute() {
	shooter->ReleaseLatch();
	eyecandy->ShootPattern();
}

// Make this return true when this Command no longer needs to run execute()
bool ReleaseShooterLatch::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ReleaseShooterLatch::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ReleaseShooterLatch::Interrupted() {
}
