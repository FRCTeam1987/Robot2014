#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author LAPSTATION0
 */
class Shooter: public Subsystem {

public:
	enum SHOOTER_POSITION
	{
		POSITION_UNKNOWN,		// position is unknown
		POSITION_UNPRIMED,		// ball has been shot - shooter is loaded
		POSITION_TRUSS,			// shooter is primed for truss shot
		POSITION_GOAL,			// shooter is primed for goal shot
	};
	
	Shooter(int posPrimedGoal, int posPrimedTruss, int posUnprimed, bool isCompetitionBot);
	void InitDefaultCommand();
	
	bool IsPrimedForTruss();
	bool IsPrimedForGoal();
	bool IsBrakeEngaged();
	bool GetBarSensor();
	
	void EngageBrake(const char *from);
	void ReleaseBrake();
	
	void EngageLatch();
	void ReleaseLatch();
	
	void ForwardDriveMotor();
	void BackDriveMotor();
	void StopDriveMotor();
	
	void TurnOnCameraLEDS();
	void TurnOffCameraLEDS();
	
	void Enable();
	void Disable();
	bool IsDisabled();
	
	SHOOTER_POSITION GetCurrentSetPoint();
	
	int16_t GetPositionSensor();
	
	int GetPosPrimedGoal();
	int GetPosPrimedTruss();
	int GetPosUnprimed();
	
	bool GetHot();
	void SetHot(bool);
	void ResetHot();
	void DecideHot();
	
private:
	DoubleSolenoid * brakeSolenoid;
	DoubleSolenoid * latchSolenoid;
	Talon * winchMotor;
	
	DigitalInput * brakeSensor;
	DigitalInput * barSensor;
	
	AnalogChannel * positionSensor;
	
	Solenoid * cameraLEDS;
	
	SHOOTER_POSITION shooterPosition;
	
	bool isDisabled;
	
	int m_posPrimedGoal;
	int m_posPrimedTruss;
	int m_posUnprimed;
	bool m_isCompetitionBot;
	bool m_sawHot;
};

#endif

