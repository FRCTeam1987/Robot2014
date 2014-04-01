#include "AutoShoot.h"
#include "PrimeShooterSequence.h"
#include "RelatchShooter.h"
#include "ReleaseShooterLatch.h"
#include "../Intake/LowerIntakeArm.h"
#include "../Intake/RaiseIntakeArm.h"
#include "../Intake/ForwardIntakeMotor.h"
#include "../Intake/LowerArmForShooter.h"
#include "../Intake/StopIntakeMotor.h"
#include "../Autonomous/AutoRelatch.h"

AutoShoot::AutoShoot() {
	//AddSequential(new LowerArmForShooter());
	//AddSequential(new WaitCommand(0.25));
	AddSequential(new ReleaseShooterLatch());
	AddSequential(new WaitCommand(0.1));
	//AddSequential(new RaiseIntakeArm());
	AddSequential(new AutoRelatch());
}
