#include "AutoRelatch.h"
#include "AutoBackWinchForLatching.h"
#include "AutoEngageShooterLatch.h"

AutoRelatch::AutoRelatch() {
	AddSequential(new AutoBackWinchForLatching());
	AddSequential(new WaitCommand(0.5));
	AddSequential(new AutoBackWinchForLatching());
	AddSequential(new AutoEngageShooterLatch());
}
