#include "CheckIntakeSensors.h"

CheckIntakeSensors::CheckIntakeSensors() {
	Requires(intake);
}

// Called just before this Command runs the first time
void CheckIntakeSensors::Initialize() {
//	printf("HasBall: %s\n", intake->HasBall()?"Yes":"No");
}

// Called repeatedly when this Command is scheduled to run
void CheckIntakeSensors::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool CheckIntakeSensors::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CheckIntakeSensors::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CheckIntakeSensors::Interrupted() {
}
