#ifndef SHIFTUP_H
#define SHIFTUP_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ShiftUp: public CommandBase {
public:
	ShiftUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
