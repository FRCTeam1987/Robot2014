#include "AutonomousSequence.h"
#include "Chassis/AutoDrive.h"
#include "Shooter/Shoot.h"

AutonomousSequence::AutonomousSequence(float dist) {
	AddSequential(new AutoDrive(dist));
	AddSequential(new Shoot());
}
