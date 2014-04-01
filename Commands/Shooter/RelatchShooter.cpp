#include "RelatchShooter.h"
#include "BackWinchForLatching.h"
#include "EngageShooterLatch.h"
#include "ReleaseShooterLatch.h"

RelatchShooter::RelatchShooter() {
	AddSequential(new ReleaseShooterLatch());
	AddSequential(new BackWinchForLatching());
	AddSequential(new WaitCommand(0.5));
	AddSequential(new BackWinchForLatching());
	AddSequential(new EngageShooterLatch());
}
