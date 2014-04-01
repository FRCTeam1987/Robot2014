#include "AutoOneBallLeftNotHot.h"
#include "../Chassis/AutoDriveTimed.h"
#include "../Shooter/Shoot.h"
#include "../Chassis/Rotate.h"

AutoOneBallLeftNotHot::AutoOneBallLeftNotHot() {
	AddSequential(new AutoDriveTimed());
	AddSequential(new Rotate(false,0.25));
	AddSequential(new Shoot());
}
