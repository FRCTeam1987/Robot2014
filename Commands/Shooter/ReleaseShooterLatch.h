#ifndef RELEASESHOOTERLATCH_H
#define RELEASESHOOTERLATCH_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ReleaseShooterLatch: public CommandBase {
public:
	ReleaseShooterLatch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
