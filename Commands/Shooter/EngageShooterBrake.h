#ifndef ENGAGESHOOTERBRAKE_H
#define ENGAGESHOOTERBRAKE_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class EngageShooterBrake: public CommandBase {
public:
	EngageShooterBrake();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
