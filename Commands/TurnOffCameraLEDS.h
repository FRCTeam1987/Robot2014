#ifndef TURNOFFCAMERALEDS_H
#define TURNOFFCAMERALEDS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class TurnOffCameraLEDS: public CommandBase {
public:
	TurnOffCameraLEDS();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
