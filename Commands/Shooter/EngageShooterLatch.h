#ifndef ENGAGESHOOTERLATCH_H
#define ENGAGESHOOTERLATCH_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class EngageShooterLatch: public CommandBase {
public:
	EngageShooterLatch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
