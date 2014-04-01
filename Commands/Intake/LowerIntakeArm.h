#ifndef LOWERINTAKEARM_H
#define LOWERINTAKEARM_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class LowerIntakeArm: public CommandBase {
public:
	LowerIntakeArm();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
