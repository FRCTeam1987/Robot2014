#ifndef STOPWINCHMOTOR_H
#define STOPWINCHMOTOR_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class StopWinchMotor: public CommandBase {
public:
	StopWinchMotor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
