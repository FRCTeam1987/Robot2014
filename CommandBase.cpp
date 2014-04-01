#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"
#include "Robotmap.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::oi = NULL;
Chassis* CommandBase::chassis = NULL;
Intake* CommandBase::intake = NULL;
Pneumatics* CommandBase::compressor = NULL;
Shooter* CommandBase::shooter = NULL;
EyeCandy* CommandBase::eyecandy = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	
	int posPrimedGoal;
	int posPrimedTruss;
	int posUnprimed;
	float leftEncoderDistPerFoot;
	float leftMotorAutoSpeed;
	float rightMotorAutoSpeed;
	bool isCompetitionBot;
	
	DigitalInput *botSensor = new DigitalInput(BOT_SENSOR);
//	printf("botSensor->Get() = %lu\n", botSensor->Get());
	if(botSensor->Get() == 0)
	{
		// running on competition bot
//		printf("Running on competition bot\n");
		posPrimedGoal = COMPETITION_SHOOTER_POSITION_PRIMED_GOAL;
		posPrimedTruss = COMPETITION_SHOOTER_POSITION_PRIMED_TRUSS;
		posUnprimed = COMPETIION_SHOOTER_POSITION_UNPRIMED;
		leftEncoderDistPerFoot = COMPETITION_LEFT_ENCODER_DIST_PER_FOOT;
		leftMotorAutoSpeed = COMPETITION_LEFT_MOTOR_SPEED;
		rightMotorAutoSpeed = COMPETITION_RIGHT_MOTOR_SPEED;
		isCompetitionBot = true;
	}
	else
	{
		// running on practice bot
//		printf("Running on practice bot\n");
		posPrimedGoal = PRACTICE_SHOOTER_POSITION_PRIMED_GOAL;
		posPrimedTruss = PRACTICE_SHOOTER_POSITION_PRIMED_TRUSS;
		posUnprimed = PRACTICE_SHOOTER_POSITION_UNPRIMED;
		leftEncoderDistPerFoot = PRACTICE_LEFT_ENCODER_DIST_PER_FOOT;
		leftMotorAutoSpeed = PRACTICE_LEFT_MOTOR_SPEED;
		rightMotorAutoSpeed = PRACTICE_RIGHT_MOTOR_SPEED;
		isCompetitionBot = false;
	}
	
	examplesubsystem = new ExampleSubsystem();
	
	intake = new Intake();
	
	chassis = new Chassis(leftEncoderDistPerFoot, leftMotorAutoSpeed, rightMotorAutoSpeed, isCompetitionBot);
	
	compressor = new Pneumatics();
	
	shooter = new Shooter(posPrimedGoal, posPrimedTruss, posUnprimed, isCompetitionBot);
	
	oi = new OI();
	
	eyecandy = new EyeCandy(isCompetitionBot);
	eyecandy->RainbowPattern();
}
