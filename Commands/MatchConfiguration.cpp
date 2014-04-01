#include "MatchConfiguration.h"
#include "Shooter/PrimeShooterSequence.h"
#include "../Subsystems/Shooter.h"
#include "Intake/RaiseIntakeArm.h"

MatchConfiguration::MatchConfiguration() {
	AddSequential(new PrimeShooterSequence(Shooter::POSITION_GOAL));
	AddSequential(new RaiseIntakeArm());
}
