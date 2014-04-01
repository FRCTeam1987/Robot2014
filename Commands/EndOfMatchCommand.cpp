#include "EndOfMatchCommand.h"
#include "Intake/ForwardIntakeMotor.h"
#include "Shooter/PrimeShooter.h"

EndOfMatchCommand::EndOfMatchCommand() {
		AddSequential(new ForwardIntakeMotor());
		AddSequential(new PrimeShooter(Shooter::POSITION_UNPRIMED));
}
