#ifndef EYECANDY_H
#define EYECANDY_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class EyeCandy: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	EyeCandy(bool isCompetitionBot);
	void InitDefaultCommand();
	
	void SetAlliance(DriverStation::Alliance alliance);
	void RainbowPattern(void);
	void AlliancePattern(void);
	void ShootPattern(void);
	void DisabledPattern(void);
	
	bool AreLightsOnThisBot();

private:
	DigitalOutput *alliancePin;
	DigitalOutput *patternPin1;
	DigitalOutput *patternPin2;
	
	bool m_isCompetitionBot;
};

#endif
