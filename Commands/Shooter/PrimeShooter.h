#ifndef PRIMESHOOTER_H
#define PRIMESHOOTER_H

#include "../../CommandBase.h"
#include "../../Subsystems/Shooter.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class PrimeShooter: public CommandBase {
public:
	PrimeShooter(Shooter::SHOOTER_POSITION);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	Shooter::SHOOTER_POSITION desiredPosition;
};

#endif
