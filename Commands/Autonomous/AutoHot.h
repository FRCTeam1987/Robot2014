#ifndef AUTOHOT_H
#define AUTOHOT_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class AutoHot: public CommandBase {
public:
	AutoHot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
private:
	bool sawHot;
};

#endif
