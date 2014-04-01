#ifndef RAISEINTAKEARM_H
#define RAISEINTAKEARM_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class RaiseIntakeArm: public CommandBase {
public:
	RaiseIntakeArm();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
