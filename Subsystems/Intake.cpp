#include "Intake.h"
#include "../Robotmap.h"

Intake::Intake() : Subsystem("Intake") {
	armSolenoid = new DoubleSolenoid(RAISE_INTAKE_ARM, LOWER_INTAKE_ARM);
	intakeMotor = new Talon(INTAKE_MOTOR);
	
	ballSensor = new DigitalInput(BALL_SENSOR);
	
	LiveWindow::GetInstance()->AddActuator("Intake", "Motor", intakeMotor);
	LiveWindow::GetInstance()->AddActuator("Intake", "Solenoid", armSolenoid);
	
}
    
void Intake::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Intake::ForwardIntakeMotor() {
	intakeMotor->Set(INTAKE_MOTOR_SPEED);
}

void Intake::BackIntakeMotor() {
	intakeMotor->Set(-INTAKE_MOTOR_SPEED);
}

void Intake::StopIntakeMotor() {
	intakeMotor->Set(0);
}

void Intake::RaiseIntakeArm() {
	armSolenoid->Set(DoubleSolenoid::kForward);
}

void Intake::LowerIntakeArm() {
	armSolenoid->Set(DoubleSolenoid::kReverse);
}

bool Intake::HasBall() {
	return ballSensor->Get() == 0;
}



// Put methods for controlling this subsystem
// here. Call these from Commands.
