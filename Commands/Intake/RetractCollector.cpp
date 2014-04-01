#include "RetractCollector.h"
#include "RaiseIntakeArm.h"
#include "StopIntakeMotor.h"

RetractCollector::RetractCollector() {
	AddSequential(new RaiseIntakeArm());
    AddSequential(new StopIntakeMotor());
}
