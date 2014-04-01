#ifndef BACKWINCHMOTOR_H
#define BACKWINCHMOTOR_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class BackWinchMotor: public CommandBase {
public:
	BackWinchMotor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
