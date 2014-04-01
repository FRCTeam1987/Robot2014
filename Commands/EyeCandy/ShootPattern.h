#ifndef SHOOTPATTERN_H
#define SHOOTPATTERN_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ShootPattern: public CommandBase {
public:
	ShootPattern();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
