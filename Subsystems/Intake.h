#ifndef INTAKE_H
#define INTAKE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class Intake: public Subsystem {
private:
	DoubleSolenoid * armSolenoid;
	Talon * intakeMotor;
	DigitalInput * ballSensor;
public:
	Intake();
	void InitDefaultCommand();
	void ForwardIntakeMotor();
	void BackIntakeMotor();
	void StopIntakeMotor();
	void RaiseIntakeArm();
	void LowerIntakeArm();
	bool HasBall();
};

#endif
