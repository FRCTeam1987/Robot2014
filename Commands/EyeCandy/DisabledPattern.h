#ifndef DISABLEDPATTERN_H
#define DISABLEDPATTERN_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class DisabledPattern: public CommandBase {
public:
	DisabledPattern();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
