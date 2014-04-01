#ifndef DECIDEAUTOHOT_H
#define DECIDEAUTOHOT_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class DecideAutoHot: public CommandBase {
public:
	DecideAutoHot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
