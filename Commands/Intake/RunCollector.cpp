#include "RunCollector.h"

#include "LowerIntakeArm.h"
#include "RaiseIntakeArm.h"
#include "ReverseIntakeMotor.h"
#include "StopIntakeMotor.h"
#include "WatchBall.h"

RunCollector::RunCollector() {
	AddSequential(new LowerIntakeArm());
	AddSequential(new ReverseIntakeMotor());
	AddSequential(new WatchBall());
	AddSequential(new RaiseIntakeArm());
	AddSequential(new WaitCommand(1));
	AddSequential(new StopIntakeMotor());
}
