#include "AlliancePattern.h"

AlliancePattern::AlliancePattern() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(eyecandy);
}

// Called just before this Command runs the first time
void AlliancePattern::Initialize() {
	eyecandy->AlliancePattern();
}

// Called repeatedly when this Command is scheduled to run
void AlliancePattern::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool AlliancePattern::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void AlliancePattern::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AlliancePattern::Interrupted() {
}
