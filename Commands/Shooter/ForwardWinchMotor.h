#ifndef FORWARDWINCHMOTOR_H
#define FORWARDWINCHMOTOR_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ForwardWinchMotor: public CommandBase {
public:
	ForwardWinchMotor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
