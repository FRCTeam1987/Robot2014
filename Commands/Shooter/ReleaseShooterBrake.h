#ifndef RELEASESHOOTERBRAKE_H
#define RELEASESHOOTERBRAKE_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class ReleaseShooterBrake: public CommandBase {
public:
	ReleaseShooterBrake();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
