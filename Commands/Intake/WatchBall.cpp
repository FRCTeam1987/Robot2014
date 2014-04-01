#include "WatchBall.h"

WatchBall::WatchBall() {
	Requires(intake);
}

// Called just before this Command runs the first time
void WatchBall::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void WatchBall::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool WatchBall::IsFinished() {
//	printf("Sees ball: %s\n", intake->HasBall() ? "YES" : "NO");
	return intake->HasBall();
}

// Called once after isFinished returns true
void WatchBall::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WatchBall::Interrupted() {
}
