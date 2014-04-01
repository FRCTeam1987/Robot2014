#include "AutoTwoBallHot.h"
#include "../Chassis/AutoDriveTimed.h"
#include "../Autonomous/DecideAutoHot.h"
#include "../Shooter/Shoot.h"
#include "../Shooter/AutoShoot.h"
#include "../Shooter/PrimeShooterSequence.h"
#include "../Intake/RunCollector.h"
#include "../Intake/LowerIntakeArm.h"
#include "../Intake/ReverseIntakeMotor.h"

AutoTwoBallHot::AutoTwoBallHot() {
	AddSequential(new LowerIntakeArm());
	AddSequential(new AutoDriveTimed());
	AddSequential(new DecideAutoHot());
	AddSequential(new AutoShoot());
	AddParallel(new ReverseIntakeMotor());
	AddSequential(new PrimeShooterSequence(Shooter::POSITION_GOAL));
	AddSequential(new RunCollector());
	AddSequential(new WaitCommand(0.25));	// last delay to shorten.
	AddSequential(new Shoot());
}
