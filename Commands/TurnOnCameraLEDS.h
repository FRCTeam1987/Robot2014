#ifndef TURNONCAMERALEDS_H
#define TURNONCAMERALEDS_H

#include "../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class TurnOnCameraLEDS: public CommandBase {
public:
	TurnOnCameraLEDS();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
