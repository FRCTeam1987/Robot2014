#include "AutoDriveTimed.h"
#include "../../Subsystems/Chassis.h"

AutoDriveTimed::AutoDriveTimed() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(chassis);
	SetTimeout(1.75);
}

// Called just before this Command runs the first time
void AutoDriveTimed::Initialize() {
	chassis->AutoTankDrive(chassis->GetLeftMotorAutoSpeed(), chassis->GetRightMotorAutoSpeed());
}

// Called repeatedly when this Command is scheduled to run
void AutoDriveTimed::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDriveTimed::IsFinished() {
	return IsTimedOut();
}

// Called once after isFinished returns true
void AutoDriveTimed::End() {
	chassis->AutoDrive(0,0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDriveTimed::Interrupted() {
}
