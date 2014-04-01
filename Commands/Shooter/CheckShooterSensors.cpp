#include "CheckShooterSensors.h"

CheckShooterSensors::CheckShooterSensors() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void CheckShooterSensors::Initialize() {
	printf("POT: %d \t IsBrakeEngaged: %s \t IsBarEngaged: %s\n", shooter->GetPositionSensor(), shooter->IsBrakeEngaged()?"Yes":"No", shooter->GetBarSensor()?"Yes":"No");
	
}

// Called repeatedly when this Command is scheduled to run
void CheckShooterSensors::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool CheckShooterSensors::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CheckShooterSensors::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CheckShooterSensors::Interrupted() {
}
