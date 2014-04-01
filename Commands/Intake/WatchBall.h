#ifndef WATCHBALL_H
#define WATCHBALL_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class WatchBall: public CommandBase {
public:
	WatchBall();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
