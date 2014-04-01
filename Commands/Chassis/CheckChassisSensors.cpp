#include "CheckChassisSensors.h"

CheckChassisSensors::CheckChassisSensors() {
	Requires(chassis);
}

// Called just before this Command runs the first time
void CheckChassisSensors::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CheckChassisSensors::Execute() {
//	printf("LeftEncoder:%.2f, RightEncoder:%.2f\n",
//			chassis->LeftEncoderGetDistance(), chassis->RightEncoderGetDistance());
}

// Make this return true when this Command no longer needs to run execute()
bool CheckChassisSensors::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CheckChassisSensors::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CheckChassisSensors::Interrupted() {
}
