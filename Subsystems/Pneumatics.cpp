#include "Pneumatics.h"
#include "../Robotmap.h"

Pneumatics::Pneumatics() : Subsystem("Pneumatics") {
	compressor = new Compressor(PRESSURE_SWITCH_CHANNEL, COMPRESSOR_RELAY_CHANNEL);
	
	pressureSwitch = new AnalogChannel(PRESSURE_SWITCH);
}
    
void Pneumatics::InitDefaultCommand() {
	
}

UINT32 Pneumatics::GetPressureSwitchValue() 
{
	
	return compressor->GetPressureSwitchValue();
	
}

float Pneumatics::getPressureVoltage()
{
	return pressureSwitch->GetVoltage();
}

void Pneumatics::Start() 
{
	
	compressor->Start();
	
}

void Pneumatics::Stop()
{
	
	compressor->Stop();
	
}

