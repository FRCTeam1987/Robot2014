#include "EyeCandy.h"
#include "../Robotmap.h"

EyeCandy::EyeCandy(bool isCompetitionBot) : Subsystem("EyeCandy") {
	alliancePin = new DigitalOutput(LEDLIGHTS_ALLIANCE_PIN);
	patternPin1 = new DigitalOutput(LEDLIGHTS_PATTERN_PIN_1);
	patternPin2 = new DigitalOutput(LEDLIGHTS_PATTERN_PIN_2);
	
	m_isCompetitionBot = isCompetitionBot;
}
    
void EyeCandy::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

bool EyeCandy::AreLightsOnThisBot()
{
	return m_isCompetitionBot == true;
}

void EyeCandy::SetAlliance(DriverStation::Alliance alliance)
{
	alliancePin->Set(alliance==DriverStation::kRed ? 1 : 0);
}

void EyeCandy::RainbowPattern(void)
{
	if(AreLightsOnThisBot() == false)
		return;
	
	patternPin1->Set(0);
	patternPin2->Set(0);
}

void EyeCandy::AlliancePattern(void)
{
	if(AreLightsOnThisBot() == false)
		return;
	
	patternPin1->Set(0);
	patternPin2->Set(1);
}

void EyeCandy::ShootPattern(void)
{
	if(AreLightsOnThisBot() == false)
		return;
	
	patternPin1->Set(1);
	patternPin2->Set(1);
	
	Wait(0.1);
	
	AlliancePattern();
}

void EyeCandy::DisabledPattern(void)
{
	if(AreLightsOnThisBot() == false)
		return;
	
	patternPin1->Set(1);
	patternPin2->Set(0);
}

