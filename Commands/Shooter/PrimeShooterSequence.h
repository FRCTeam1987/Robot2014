#ifndef PRIMESHOOTERSEQUENCE_H
#define PRIMESHOOTERSEQUENCE_H

#include "Commands/CommandGroup.h"
#include "../../Subsystems/Shooter.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class PrimeShooterSequence: public CommandGroup {
public:	
	PrimeShooterSequence(Shooter::SHOOTER_POSITION desiredPosition);
};

#endif
