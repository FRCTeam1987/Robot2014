#include "ShootPattern.h"

ShootPattern::ShootPattern() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(eyecandy);
}

// Called just before this Command runs the first time
void ShootPattern::Initialize() {
	eyecandy->ShootPattern();
}

// Called repeatedly when this Command is scheduled to run
void ShootPattern::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool ShootPattern::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ShootPattern::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootPattern::Interrupted() {
}
