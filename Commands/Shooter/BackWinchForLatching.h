#ifndef BACKWINCHFORLATCHING_H
#define BACKWINCHFORLATCHING_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class BackWinchForLatching: public CommandBase {
public:
	BackWinchForLatching();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
