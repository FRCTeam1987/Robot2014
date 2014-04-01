#include "PassBall.h"
#include "Intake/ForwardIntakeMotor.h"
#include "Intake/LowerIntakeArm.h"

PassBall::PassBall() {
	AddSequential(new ForwardIntakeMotor());
}
