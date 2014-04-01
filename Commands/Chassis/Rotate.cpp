#include "Rotate.h"

Rotate::Rotate(bool rotateRight, float timeout) {
	Requires(chassis);
	SetTimeout(timeout);
	myDir = rotateRight;
}

// Called just before this Command runs the first time
void Rotate::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void Rotate::Execute() {
	if(myDir == 0){ 					// ROTATE LEFT
		chassis->AutoDrive(0,0.75);
	}
	else{								//ROTATE RIGHT
		chassis->AutoDrive(0,-0.75);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool Rotate::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void Rotate::End() {
	chassis->AutoDrive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Rotate::Interrupted() {
	chassis->AutoDrive(0,0);
}
