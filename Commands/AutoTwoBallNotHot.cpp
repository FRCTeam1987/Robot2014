#include "AutoTwoBallNotHot.h"
#include "Chassis/AutoDriveTimed.h"
#include "Shooter/Shoot.h"
#include "Shooter/AutoShoot.h"
#include "Shooter/PrimeShooterSequence.h"
#include "Intake/RunCollector.h"
#include "Intake/LowerIntakeArm.h"
#include "Intake/ReverseIntakeMotor.h"

AutoTwoBallNotHot::AutoTwoBallNotHot() {
	AddSequential(new LowerIntakeArm());
	AddSequential(new AutoDriveTimed());
	AddSequential(new AutoShoot());
	AddParallel(new ReverseIntakeMotor());
	AddSequential(new PrimeShooterSequence(Shooter::POSITION_GOAL));
	AddSequential(new RunCollector());
	AddSequential(new WaitCommand(1));
	AddSequential(new Shoot());
}
