#ifndef BRONCOJOY_H
#define BRONCOJOY_H

#include "Joystick.h"

class BroncoJoy : public Joystick
{
public:
	explicit BroncoJoy(UINT32 port);
	BroncoJoy(UINT32 port, UINT32 numAxisTypes, UINT32 numButtonTypes);

	virtual float GetX(JoystickHand hand = kRightHand);
	virtual float GetY(JoystickHand hand = kRightHand);
};

#endif // end of BRONCOJOY_H
