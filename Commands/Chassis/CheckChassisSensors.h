#ifndef CHECKCHASSISSENSORS_H
#define CHECKCHASSISSENSORS_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class CheckChassisSensors: public CommandBase {
public:
	CheckChassisSensors();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
