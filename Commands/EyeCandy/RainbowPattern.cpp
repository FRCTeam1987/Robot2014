#include "RainbowPattern.h"

RainbowPattern::RainbowPattern() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(eyecandy);
}

// Called just before this Command runs the first time
void RainbowPattern::Initialize() {
	eyecandy->RainbowPattern();
}

// Called repeatedly when this Command is scheduled to run
void RainbowPattern::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool RainbowPattern::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void RainbowPattern::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RainbowPattern::Interrupted() {
}
