#include "Drive.h"
#if 0
#include "../XboxController.h"
#endif

Drive::Drive() {
	Requires(chassis);
	//	LiveWindow::GetInstance()->AddSensor("Chassis", "Left Encoder", leftEncoder);
}

// Called just before this Command runs the first time
void Drive::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void Drive::Execute() {
//	chassis->ArcadeDrive(oi->GetJoystick());
	chassis->XboxDrive(oi->GetXbox());
	//chassis->XboxTankDrive(oi->GetXbox());
	//chassis->XboxPaulDrive(oi->GetXbox());
	
//#if 0
//	XboxController *xbox = (XboxController *)oi->GetJoystick();
//	if(xbox->GetAButton())
//		printf("A Button!\n");
//	if(xbox->GetBButton())
//		printf("B Button!\n");
//	if(xbox->GetXButton())
//		printf("X Button!\n");
//	if(xbox->GetYButton())
//		printf("Y Button!\n");
//	if(xbox->GetLBButton())
//		printf("LB Button!\n");
//	if(xbox->GetRBButton())
//		printf("RB Button!\n");
//	if(xbox->GetLeftJoyButton())
//		printf("LT Button!\n");
//	if(xbox->GetRightJoyButton())
//		printf("RT Button!\n");
//	if(xbox->GetBackButton())
//		printf("BACK Button!\n");
//	if(xbox->GetStartButton())
//		printf("START Button!\n");
//#endif
}

// Make this return true when this Command no longer needs to run execute()
bool Drive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Drive::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Drive::Interrupted() {
}
