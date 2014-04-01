#ifndef AUTOSHOOTIF_H
#define AUTOSHOOTIF_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class AutoShootIf: public CommandBase {
public:
	AutoShootIf();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
