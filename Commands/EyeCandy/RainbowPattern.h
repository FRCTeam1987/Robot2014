#ifndef RAINBOWPATTERN_H
#define RAINBOWPATTERN_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class RainbowPattern: public CommandBase {
public:
	RainbowPattern();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
