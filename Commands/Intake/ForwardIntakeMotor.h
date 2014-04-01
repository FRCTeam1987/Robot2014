#ifndef FORWARDINTAKEMOTOR_H
#define FORWARDINTAKEMOTOR_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ForwardIntakeMotor: public CommandBase {
public:
	ForwardIntakeMotor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
