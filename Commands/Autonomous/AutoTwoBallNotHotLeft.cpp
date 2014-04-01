#include "AutoTwoBallNotHotLeft.h"
#include "../Chassis/AutoDriveTimed.h"
#include "../Shooter/Shoot.h"
#include "../Shooter/AutoShoot.h"
#include "../Shooter/PrimeShooterSequence.h"
#include "../Intake/RunCollector.h"
#include "../Intake/LowerIntakeArm.h"
#include "../Intake/ReverseIntakeMotor.h"
#include "../Chassis/Rotate.h"

AutoTwoBallNotHotLeft::AutoTwoBallNotHotLeft() {
	AddSequential(new LowerIntakeArm());
	AddSequential(new AutoDriveTimed());
	AddSequential(new Rotate(false,0.25));
	AddSequential(new AutoShoot());
	AddParallel(new ReverseIntakeMotor());
	AddSequential(new PrimeShooterSequence(Shooter::POSITION_GOAL));
	AddSequential(new RunCollector());
	AddSequential(new WaitCommand(0.25));	// last delay to shorten.
	AddSequential(new Shoot());
}
