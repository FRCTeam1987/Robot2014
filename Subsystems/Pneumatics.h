#ifndef PNEUMATICS_H
#define PNEUMATICS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class Pneumatics: public Subsystem {
private:
	Compressor * compressor;
public:
	Pneumatics();
	void InitDefaultCommand();
	UINT32 GetPressureSwitchValue();
	void Start();
	void Stop();
	
	float getPressureVoltage();
	
private:
	AnalogChannel *pressureSwitch;
};

#endif
