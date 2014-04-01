#include "Shooter.h"
#include "../Robotmap.h"

Shooter::Shooter(int posPrimedGoal, int posPrimedTruss, int posUnprimed, bool isCompetitionBot)
	: Subsystem("Shooter") {
	
	m_posPrimedGoal = posPrimedGoal;
	m_posPrimedTruss = posPrimedTruss;
	m_posUnprimed = posUnprimed;
	m_isCompetitionBot = isCompetitionBot;
	
	latchSolenoid = new DoubleSolenoid(ENGAGE_SHOOTER_LATCH, RELEASE_SHOOTER_LATCH);
	brakeSolenoid = new DoubleSolenoid(ENGAGE_SHOOTER_BRAKE, RELEASE_SHOOTER_BRAKE);
	
	brakeSensor = new DigitalInput(BRAKE_SENSOR);
	
	barSensor = new DigitalInput(BAR_SENSOR);
	
	winchMotor = new Talon(WINCH_MOTOR); 
	
	positionSensor = new AnalogChannel(SHOOTER_POSITION_SENSOR);
	
	isDisabled = false;
	
	LiveWindow::GetInstance()->AddActuator("Shooter", "Winch", winchMotor);
	LiveWindow::GetInstance()->AddSensor("Shooter", "POT Sensor", positionSensor);
	LiveWindow::GetInstance()->AddSensor("TestSubsystem", "Bar Sensor", barSensor);
 
}
    
void Shooter::InitDefaultCommand() {

}

bool Shooter::IsBrakeEngaged() {
	return brakeSensor->Get() == 1;
}

void Shooter::EngageLatch()
{
	latchSolenoid->Set(DoubleSolenoid::kReverse);
}

void Shooter::ReleaseLatch()
{
	latchSolenoid->Set(DoubleSolenoid::kForward);
}

void Shooter::EngageBrake(const char *from)
{
	printf("Enaging Brake Solenoid (from %s)\n", from);
	if(IsDisabled() == false)
		brakeSolenoid->Set(DoubleSolenoid::kReverse);
}

void Shooter::ReleaseBrake()
{
	printf("Releasing Brake Solenoid\n");
	brakeSolenoid->Set(DoubleSolenoid::kForward);
}

void Shooter::ForwardDriveMotor()
{
	if(IsBrakeEngaged() == false && IsDisabled() == false){
		winchMotor->Set(WINCH_FORWARD_MOTOR_SPEED);
	}
}

void Shooter::BackDriveMotor()
{
	if(IsBrakeEngaged() == false && IsDisabled() == false){
		winchMotor->Set(-WINCH_BACK_MOTOR_SPEED);
	}
}

void Shooter::StopDriveMotor()
{
	winchMotor->Set(0);
}

bool Shooter::IsPrimedForGoal() {
	bool isPrimed = false;
	
	if(shooterPosition == POSITION_GOAL
			&& IsBrakeEngaged() )
		isPrimed = true;
	
	return isPrimed;
}



bool Shooter::IsPrimedForTruss() {
	bool isPrimed = false;
	
	if(shooterPosition == POSITION_TRUSS
			&& IsBrakeEngaged())
		isPrimed = true;
	
	return isPrimed;
}

Shooter::SHOOTER_POSITION Shooter::GetCurrentSetPoint()
{
	int16_t value = GetPositionSensor();
	SHOOTER_POSITION position = POSITION_UNKNOWN;
	
	if( abs(value-GetPosPrimedGoal()) < SHOOTER_POSITION_TOLERANCE )
		position = POSITION_GOAL;
	else if( abs(value-GetPosPrimedTruss()) < SHOOTER_POSITION_TOLERANCE )
		position = POSITION_TRUSS;
	else if( abs(value-GetPosUnprimed()) < SHOOTER_POSITION_TOLERANCE )
		position = POSITION_UNPRIMED;
	
	return position;
}

int16_t Shooter::GetPositionSensor() {
	return positionSensor->GetValue();
}

bool Shooter::GetBarSensor() {
	// the button returns 0 when it is pushed!!! noobs
	return (barSensor->Get() == 0);
}

void Shooter::TurnOnCameraLEDS() {
	if(m_isCompetitionBot)
		cameraLEDS->Set(true);
}

void Shooter::TurnOffCameraLEDS() {
	if(m_isCompetitionBot)
		cameraLEDS->Set(false);
}

void Shooter::Enable(){
	isDisabled = false;
}

void Shooter::Disable(){
	isDisabled = true;
	printf("Disabling\n");
	SmartDashboard::PutString("Is Shooter Disabled:", "yes");
}

bool Shooter::IsDisabled(){
	return isDisabled;
}

int Shooter::GetPosPrimedGoal()
{
	return m_posPrimedGoal;
}

int Shooter::GetPosPrimedTruss()
{
	return m_posPrimedTruss;
}

int Shooter::GetPosUnprimed()
{
	return m_posUnprimed;
}

