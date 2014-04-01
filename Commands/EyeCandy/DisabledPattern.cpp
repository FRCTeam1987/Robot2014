#include "DisabledPattern.h"

DisabledPattern::DisabledPattern() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(eyecandy);
}

// Called just before this Command runs the first time
void DisabledPattern::Initialize() {
	eyecandy->DisabledPattern();
}

// Called repeatedly when this Command is scheduled to run
void DisabledPattern::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool DisabledPattern::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void DisabledPattern::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DisabledPattern::Interrupted() {
}
