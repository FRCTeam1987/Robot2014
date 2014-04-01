#ifndef AUTOBACKWINCHFORLATCHING_H
#define AUTOBACKWINCHFORLATCHING_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class AutoBackWinchForLatching: public CommandBase {
public:
	AutoBackWinchForLatching();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
