#ifndef CHECKSHOOTERSENSORS_H
#define CHECKSHOOTERSENSORS_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION1
 */
class CheckShooterSensors: public CommandBase {
public:
	CheckShooterSensors();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
