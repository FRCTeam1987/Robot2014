#include "ExtendCollector.h"
#include "LowerIntakeArm.h"
#include "ReverseIntakeMotor.h"

ExtendCollector::ExtendCollector() {
	AddSequential(new LowerIntakeArm());
	AddParallel(new ReverseIntakeMotor());
}
