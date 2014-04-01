#ifndef OI_H
#define OI_H

#include "WPILib.h"
#include "XboxController.h"

class OI {
private:
	Joystick * stick1;
	Joystick * stick2;
	XboxController * xbox1;
public:
	OI();
	Joystick * GetJoystick();
	XboxController * GetXbox();
	JoystickButton * endOfMatchButton;
	JoystickButton * collectorButton;
	JoystickButton * shiftUpButton;
	JoystickButton * shiftDownButton;
	JoystickButton * passBallButton;
	JoystickButton * engageBrakeButton;
	JoystickButton * releaseBrakeButton;
	JoystickButton * forwardIntakeButton;
	JoystickButton * reverseIntakeButton;
	JoystickButton * raiseIntakeButton;
	JoystickButton * lowerIntakeButton;
	JoystickButton * stopIntakeButton;
	JoystickButton * engageLatchButton;
	JoystickButton * releaseLatchButton;
	JoystickButton * primeCompositeButton;
	JoystickButton * primeTrussButton;
	JoystickButton * primeGoalButton;
	JoystickButton * relatchShooterButton;
	JoystickButton * fireShooterButton;
	JoystickButton * stopWinchButton;
	JoystickButton * forwardWinchButton;
	JoystickButton * backWinchButton;
	JoystickButton * pitConfigButton;
	
	///////////////////////////////////////////////////////////////////////////
	
	//XBOX CONTROLLER
//	JoystickButton * xboxLowerCollector;
	JoystickButton * xboxCollect;
	JoystickButton * xboxPass;
	JoystickButton * xboxPrimeGoal;
	JoystickButton * xboxPrimeUnprime;
	JoystickButton * xboxShift;
	JoystickButton * xboxShoot;
	JoystickButton * xboxTest;
};

#endif
