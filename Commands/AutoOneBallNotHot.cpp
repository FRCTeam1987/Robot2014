#include "AutoOneBallNotHot.h"
#include "Chassis/AutoDriveTimed.h"
#include "Shooter/Shoot.h"

AutoOneBallNotHot::AutoOneBallNotHot() {
	AddSequential(new AutoDriveTimed());
	AddSequential(new Shoot());
}
