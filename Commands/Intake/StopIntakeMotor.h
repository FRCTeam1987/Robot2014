#ifndef STOPINTAKEMOTOR_H
#define STOPINTAKEMOTOR_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class StopIntakeMotor: public CommandBase {
public:
	StopIntakeMotor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
