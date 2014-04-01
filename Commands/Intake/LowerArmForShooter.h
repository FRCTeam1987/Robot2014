#ifndef LOWERARMFORSHOOTER_H
#define LOWERARMFORSHOOTER_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class LowerArmForShooter: public CommandBase {
public:
	LowerArmForShooter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
