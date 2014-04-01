#include "RunCompressor.h"
#include "../Subsystems/Pneumatics.h"

#define PRESSURE_LOW_CUTOFF 3.4
#define PRESSURE_HIGH_CUTOFF 3.65

RunCompressor::RunCompressor() {
	Requires(compressor);
}

// Called just before this Command runs the first time
void RunCompressor::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void RunCompressor::Execute() {
	if(compressor->GetPressureSwitchValue()==0){
		compressor->Start();
	}
	else{
		compressor->Stop();
	}
	Wait(0.005);
//	if(compressor->getPressureVoltage()<PRESSURE_LOW_CUTOFF){
//		compressor->Start();
//	}
//	if(compressor->getPressureVoltage()>PRESSURE_HIGH_CUTOFF)
//		compressor->Stop();
	printf("%f\n", compressor->getPressureVoltage());
}

// Make this return true when this Command no longer needs to run execute()
bool RunCompressor::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RunCompressor::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunCompressor::Interrupted() {
}
