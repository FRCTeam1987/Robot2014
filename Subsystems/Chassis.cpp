#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/Chassis/Drive.h"
#include "../XboxController.h"

Chassis::Chassis(float leftEncoderDistPerFoot, float leftMotorAutoSpeed, float rightMotorAutoSpeed, bool isCompetitionBot) : Subsystem("Chassis") {
	m_leftEncoderDistPerFoot = leftEncoderDistPerFoot;
	m_leftMotorAutoSpeed = leftMotorAutoSpeed;
	m_rightMotorAutoSpeed = rightMotorAutoSpeed;
	
	if(isCompetitionBot == true){
		BroncobotsSolenoid = new Solenoid(BRONCOBOTS_SOLENOID, BRONCOBOTS_PIN);
		BroncobotsSolenoid->Set(true);
	}
	
	CameraLedSolenoid = new Solenoid(CAMERALED_SOLENOID, CAMERALED_PIN);
	
	leftDrive = new Victor(LEFT_DRIVE_MOTOR);
	rightDrive = new Victor(RIGHT_DRIVE_MOTOR);
	
	drive = new RobotDrive(leftDrive, rightDrive);
	drive->SetSafetyEnabled(false);

	leftEncoder = new Encoder(LEFT_ENCODER_CHANNEL_A, LEFT_ENCODER_CHANNEL_B, false, Encoder::k4X);
	rightEncoder = new Encoder(RIGHT_ENCODER_CHANNEL_A, RIGHT_ENCODER_CHANNEL_B, true, Encoder::k4X);
	
//	leftEncoder->SetDistancePerPulse(52.83/5000);
	/////
	// Hai.
	// Why not use the the encoder member variable distanceperpulse and then just call getdistance?
	// leftEncoder->SetDistancePerPulse(1);
	// double distanceTraveled = leftEncoder->GetDistance();
	// Bai.
	/////
	leftEncoder->Start();
	rightEncoder->Start();
	
//	gyro = new Gyro(GYRO);
	
	shifters = new DoubleSolenoid(SHIFT_HIGH, SHIFT_LOW);
	
//	LiveWindow::GetInstance()->AddActuator("Chassis", "Left Drive Motor", leftDrive);
//	LiveWindow::GetInstance()->AddActuator("Chassis", "Right Drive Motor", rightDrive);
//	LiveWindow::GetInstance()->AddSensor("Chassis", "Left Encoder", leftEncoder);
//	LiveWindow::GetInstance()->AddSensor("Chassis", "Right Encoder", rightEncoder);
}
    
void Chassis::InitDefaultCommand() {
	SetDefaultCommand(new Drive());
}

void Chassis::ArcadeDrive(Joystick * stick) {
	drive->ArcadeDrive(-stick->GetY(), -stick->GetX());
}

void Chassis::AutoDrive(double driveValue, double rotateValue) {
	drive->ArcadeDrive(driveValue, rotateValue);
}

void Chassis::AutoTankDrive(double leftMotorSpeed, double rightMotorSpeed) {
	drive->TankDrive(leftMotorSpeed, rightMotorSpeed);
}

void Chassis::XboxDrive(XboxController * xbox) {
	drive->ArcadeDrive(xbox->GetY(), xbox->GetX());
}

void Chassis::XboxTankDrive(XboxController * xbox) {
	drive->TankDrive(-xbox->GetLeftJoyY(), -xbox->GetRightJoyY());
}

void Chassis::XboxPaulDrive(XboxController * xbox) {
	drive->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
	drive->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	drive->ArcadeDrive(xbox, 2, xbox, 4);
}

void Chassis::ShiftUp(){
	shifters->Set(DoubleSolenoid::kForward);
}

void Chassis::ShiftDown(){
	shifters->Set(DoubleSolenoid::kReverse);
}

void Chassis::LeftEncoderStart(){
	leftEncoder->Start();
}

void Chassis::LeftEncoderStop(){
	leftEncoder->Stop();
}

void Chassis::LeftEncoderReset(){
	leftEncoder->Reset();
}

void Chassis::RightEncoderStart(){
	rightEncoder->Start();
}

void Chassis::RightEncoderStop(){
	rightEncoder->Stop();
}

void Chassis::RightEncoderReset(){
	rightEncoder->Reset();
}

int Chassis::LeftEncoderGet(){
	return leftEncoder->Get();
}

int Chassis::RightEncoderGet(){
	return rightEncoder->Get();
}
double Chassis::LeftEncoderGetDistance(){
	return leftEncoder->GetDistance();
}
double Chassis::RightEncoderGetDistance(){
	return rightEncoder->GetDistance();

}

bool Chassis::LeftEncoderIsStopped(){
	return leftEncoder->GetStopped();
}
bool Chassis::RightEncoderIsStopped(){
	return rightEncoder->GetStopped();

}

float Chassis::GetLeftEncoderDistPerFoot()
{
	return m_leftEncoderDistPerFoot;
}

float Chassis::GetLeftMotorAutoSpeed() {
	return m_leftMotorAutoSpeed;
}

float Chassis::GetRightMotorAutoSpeed() {
	return m_rightMotorAutoSpeed;
}

void Chassis::TurnOnCameraLed() {
	CameraLedSolenoid->Set(true);
}

void Chassis::TurnOffCameraLed() {
	CameraLedSolenoid->Set(false);
}

//void Chassis::ResetGyro() {
//	gyro->Reset();
//}
//
//float Chassis::GetGyro() {
//	return gyro->GetAngle();
//}
