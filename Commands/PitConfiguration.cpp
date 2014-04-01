#include "PitConfiguration.h"
#include "Shooter/PrimeShooter.h"
#include "Shooter/ReleaseShooterLatch.h"

PitConfiguration::PitConfiguration() {
        AddSequential(new PrimeShooter(Shooter::POSITION_UNPRIMED));
        AddSequential(new ReleaseShooterLatch());
}
