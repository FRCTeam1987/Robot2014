#include "AutoOneBallLeftNotHot.h"
#include "Chassis/AutoDriveTimed.h"
#include "Shooter/Shoot.h"
#include "Chassis/Rotate.h"

AutoOneBallLeftNotHot::AutoOneBallLeftNotHot() {
	AddSequential(new AutoDriveTimed());
	AddSequential(new Rotate(false));
	AddSequential(new Shoot());
}
