#include "ExampleCommand.h"

ExampleCommand::ExampleCommand() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(intake);
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute() {
	printf("Has Ball: %s\n", intake->HasBall() ? "Yes" : "No");
	
}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ExampleCommand::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted() {
}
