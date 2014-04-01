#include "AutoDrive.h"

AutoDrive::AutoDrive(float dist) {
	Requires(chassis);
//	SetTimeout(3.0);
	desiredDistance = dist;
}

// Called just before this Command runs the first time
void AutoDrive::Initialize() {
	chassis->LeftEncoderReset();
	chassis->RightEncoderReset();
//	chassis->ResetGyro();
	chassis->AutoTankDrive(chassis->GetLeftMotorAutoSpeed(), chassis->GetRightMotorAutoSpeed());
	chassis->TurnOnCameraLed();
}

// Called repeatedly when this Command is scheduled to run
void AutoDrive::Execute() {
//	float angle = chassis->GetGyro();
//	chassis->AutoDrive(0.7, -angle*KP);
	printf("LeftEncoder: %d \n", chassis->LeftEncoderGet());
	printf("RightEncoder: %d \n", chassis->RightEncoderGet());
	printf("LeftEncoderDistance: %lf \n", chassis->LeftEncoderGetDistance());
	printf("RightEncoderDistance: %lf \n", chassis->RightEncoderGetDistance());
	printf("LeftEncoderIsStopped: %s \n", chassis->LeftEncoderIsStopped()?"Yes":"No");
	printf("RightEncoderIsStopped: %s \n", chassis->RightEncoderIsStopped()?"Yes":"No");
}

// Make this return true when this Command no longer needs to run execute()
bool AutoDrive::IsFinished() {
	bool isDone = false;
	
	// calculate how far the robot has driven
	float leftEncoderDistPerFoot = chassis->GetLeftEncoderDistPerFoot();
	float leftEncoderDistTravelled = chassis->LeftEncoderGetDistance() / leftEncoderDistPerFoot;
	if(leftEncoderDistTravelled > desiredDistance)
		isDone = true;
	
	printf("Left: %f, Right: %f\n", chassis->LeftEncoderGetDistance(), chassis->RightEncoderGetDistance());
//	if(chassis->LeftEncoderGetDistance() >= desiredDistance){// && chassis->RightEncoderGetDistance() >= desiredDistance){
//		isDone = true;
//	}
	
	return isDone;
//	return IsTimedOut();
}

// Called once after isFinished returns true
void AutoDrive::End() {
	chassis->AutoDrive(0,0);
	chassis->LeftEncoderStop();
	chassis->RightEncoderStop();
	chassis->TurnOffCameraLed();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoDrive::Interrupted() {
	chassis->AutoDrive(0,0);
	chassis->LeftEncoderStop();
	chassis->RightEncoderStop();
	chassis->TurnOffCameraLed();
}
