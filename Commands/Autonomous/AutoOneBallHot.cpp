#include "AutoOneBallHot.h"
#include "../Chassis/AutoDriveTimed.h"
#include "AutoHot.h"
#include "../Shooter/Shoot.h"
#include "../TurnOnCameraLEDS.h"
#include "../TurnOffCameraLEDS.h"
#include "../Intake/LowerArmForShooter.h"

AutoOneBallHot::AutoOneBallHot() {
		//AddSequential(new TurnOnCameraLEDS());
        AddSequential(new AutoDriveTimed());
        AddSequential(new AutoHot());
        AddSequential(new Shoot());
        AddSequential(new TurnOffCameraLEDS());
}
