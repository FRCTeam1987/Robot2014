#ifndef AUTOENGAGESHOOTERLATCH_H
#define AUTOENGAGESHOOTERLATCH_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class AutoEngageShooterLatch: public CommandBase {
public:
	AutoEngageShooterLatch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
