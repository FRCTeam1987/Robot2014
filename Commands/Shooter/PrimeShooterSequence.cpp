#include "PrimeShooterSequence.h"

#include "ReleaseBrakeForPriming.h"
#include "PrimeShooter.h"
#include "EngageShooterBrake.h"

PrimeShooterSequence::PrimeShooterSequence(Shooter::SHOOTER_POSITION desiredPosition) {
	AddSequential(new ReleaseBrakeForPriming());
	AddSequential(new PrimeShooter(desiredPosition));
	AddSequential(new EngageShooterBrake());
}
