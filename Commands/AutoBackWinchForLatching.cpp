#include "AutoBackWinchForLatching.h"
#include "../Robotmap.h"

AutoBackWinchForLatching::AutoBackWinchForLatching() {
	Requires(shooter);
	Requires(eyecandy);
}

// Called just before this Command runs the first time
void AutoBackWinchForLatching::Initialize() {
	if(shooter->IsBrakeEngaged())
		shooter->ReleaseBrake();
}

// Called repeatedly when this Command is scheduled to run
void AutoBackWinchForLatching::Execute() {
	int posPrimedGoal = shooter->GetPosPrimedGoal();
	
	if(//shooter->GetPositionSensor() > SHOOTER_POSITION_UNPRIMED + SHOOTER_POSITION_TOLERANCE ||
		shooter->GetPositionSensor() < posPrimedGoal - SHOOTER_POSITION_TOLERANCE){
		shooter->Disable();
		shooter->StopDriveMotor();
		shooter->ReleaseBrake();
		eyecandy->DisabledPattern();
		return;
	}
	
	shooter->BackDriveMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool AutoBackWinchForLatching::IsFinished() {
	return shooter->GetBarSensor();
}

// Called once after isFinished returns true
void AutoBackWinchForLatching::End() {
	shooter->StopDriveMotor();
	shooter->EngageBrake("BackWinchForLatching::End()");
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoBackWinchForLatching::Interrupted() {
	shooter->StopDriveMotor();
}
