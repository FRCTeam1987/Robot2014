#include "BroncoJoy.h"

#include <math.h>

// Joystick range in which movement is considered accidental
#define JOY_DEAD 0.05
#define MOTOR_MIN 0.15

// Uncomment the following line to enable exponential drive control
//#define EXPO_DRIVE
#define EXPO_MULTIPLIER_DRIVE 5
#define EXPO_MULTIPLIER_TURN 2

#ifdef EXPO_DRIVE
static float expDrive(float joyVal, float expo)
{
	float joyMax = 1.0 - JOY_DEAD;
	float joySign = joyVal<0 ? -1. : 1.;
	float joyLive = fabs(joyVal) - JOY_DEAD;
	return joySign * (MOTOR_MIN + ((1.0-MOTOR_MIN) * pow(joyLive, expo)/pow(joyMax,expo)));
}
#endif

BroncoJoy::BroncoJoy(UINT32 port) :
	Joystick(port) {
}

BroncoJoy::BroncoJoy(UINT32 port, UINT32 numAxisTypes, UINT32 numButtonTypes) :
	Joystick(port, numAxisTypes, numButtonTypes) {
}

float BroncoJoy::GetX(JoystickHand hand) {
	float x = Joystick::GetX(hand);

	// dead zone
	if (fabs(x) < JOY_DEAD)
		x = 0;
#ifdef EXPO_DRIVE
	else
	{
		// implement an exponential drive curve
		x = expDrive(x, EXPO_MULTIPLIER_TURN);
	}
#endif

	return x;
}

float BroncoJoy::GetY(JoystickHand hand) {
	float y = Joystick::GetY(hand);

	if (fabs(y) < JOY_DEAD)
		y = 0;
#ifdef EXPO_DRIVE
	else
	{
		// implement an exponential drive curve
		y = expDrive(y, EXPO_MULTIPLIER_DRIVE);
	}
#endif

	return y;
}
