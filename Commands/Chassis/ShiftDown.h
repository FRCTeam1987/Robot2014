#ifndef SHIFTDOWN_H
#define SHIFTDOWN_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ShiftDown: public CommandBase {
public:
	ShiftDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
