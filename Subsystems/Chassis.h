#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../XboxController.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class Chassis: public Subsystem {
private:
	Victor * leftDrive;
	Victor * rightDrive;
	RobotDrive * drive;
	DoubleSolenoid * shifters;
	Encoder * leftEncoder;
	Encoder * rightEncoder;
	Solenoid *BroncobotsSolenoid;
	Solenoid *CameraLedSolenoid;
//	Gyro * gyro;
public:
	Chassis(float leftEncoderDistPerFoot, float leftMotorAutoSpeed, float rightMotorAutoSpeed, bool isCompetitionBot);
	void InitDefaultCommand();
	void ArcadeDrive(Joystick * stick);
	void AutoDrive(double, double);
	void AutoTankDrive(double, double);
	void XboxDrive(XboxController * xbox);
	void XboxTankDrive(XboxController * xbox);
	void XboxPaulDrive(XboxController * xbox);
	void ShiftUp();
	void ShiftDown();
	void LeftEncoderStart();
	void LeftEncoderStop();
	void LeftEncoderReset();
	void RightEncoderStart();
	void RightEncoderStop();
	void RightEncoderReset();
	int LeftEncoderGet();
	int RightEncoderGet();
	double LeftEncoderGetDistance();
	double RightEncoderGetDistance();
	bool LeftEncoderIsStopped();
	bool RightEncoderIsStopped();
	float GetLeftEncoderDistPerFoot();
	float GetLeftMotorAutoSpeed();
	float GetRightMotorAutoSpeed();
	
	void TurnOnCameraLed( void );
	void TurnOffCameraLed( void );
	
//	void ResetGyro();
//	float GetGyro();
	
private:
	float m_leftEncoderDistPerFoot;
	float m_leftMotorAutoSpeed;
	float m_rightMotorAutoSpeed;
};

#endif
