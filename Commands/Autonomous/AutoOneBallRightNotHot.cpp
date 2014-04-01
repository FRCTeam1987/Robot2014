#include "AutoOneBallRightNotHot.h"
#include "../Chassis/AutoDriveTimed.h"
#include "../Shooter/Shoot.h"
#include "../Chassis/Rotate.h"
#include "../Intake/LowerIntakeArm.h"

AutoOneBallRightNotHot::AutoOneBallRightNotHot() {
	AddSequential(new AutoDriveTimed());
	AddSequential(new Rotate(true,0.25));
	AddSequential(new Shoot());
}
