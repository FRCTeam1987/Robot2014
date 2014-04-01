#ifndef RELEASEBRAKEFORPRIMING_H
#define RELEASEBRAKEFORPRIMING_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ReleaseBrakeForPriming: public CommandBase {
public:
	ReleaseBrakeForPriming();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
