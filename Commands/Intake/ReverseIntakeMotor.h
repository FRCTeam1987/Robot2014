#ifndef REVERSEINTAKEMOTOR_H
#define REVERSEINTAKEMOTOR_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ReverseIntakeMotor: public CommandBase {
public:
	ReverseIntakeMotor();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
