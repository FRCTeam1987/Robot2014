#ifndef AUTODRIVETIMED_H
#define AUTODRIVETIMED_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class AutoDriveTimed: public CommandBase {
public:
	AutoDriveTimed();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
