#include "Shoot.h"
#include "PrimeShooterSequence.h"
#include "RelatchShooter.h"
#include "ReleaseShooterLatch.h"
#include "../Intake/LowerIntakeArm.h"
#include "../Intake/RaiseIntakeArm.h"
#include "../Intake/ForwardIntakeMotor.h"
#include "../Intake/LowerArmForShooter.h"
#include "../Intake/StopIntakeMotor.h"

Shoot::Shoot() {
	AddSequential(new LowerArmForShooter());
	AddSequential(new WaitCommand(0.25));
	AddSequential(new ReleaseShooterLatch());
	AddSequential(new WaitCommand(1));
	AddSequential(new RaiseIntakeArm());
	AddSequential(new RelatchShooter());
	AddSequential(new PrimeShooterSequence(Shooter::POSITION_GOAL));
}
