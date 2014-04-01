#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ExampleCommand.h"
#include "CommandBase.h"
#include "Commands/RunCompressor.h"
#include "Commands/AutoOneBallHot.h"
#include "Commands/Chassis/AutoDrive.h"
#include "XboxController.h"
#include "Commands/AutonomousSequence.h"
#include "Commands/Chassis/AutoDrive.h"
#include "Commands/AutoOneBallNotHot.h"
#include "Commands/AutoOneBallLeftNotHot.h"
#include "Commands/AutoOneBallRightNotHot.h"
#include "Commands/Chassis/Rotate.h"
#include "Commands/AutoTwoBallNotHot.h"
#include "Commands/Intake/RunCollector.h"
#include "Commands/Eyecandy/AlliancePattern.h"

class CommandBasedRobot : public IterativeRobot {
private:
	Command *autonomousCommand;
	LiveWindow *lw;
	RunCompressor *RC;
	SendableChooser *autoChooser;
	SendableChooser *controlChooser;
//	Command *alliancePattern;
	
	
	virtual void RobotInit() {
		CommandBase::init();
		lw = LiveWindow::GetInstance();		
		autonomousCommand = new AutoOneBallHot();
		RC = new RunCompressor();
		RC->Start();
		
		autoChooser = new SendableChooser();
		autoChooser->AddDefault("Auto Hot - Uno Ballo", new AutoOneBallHot());
		//autoChooser->AddObject("The Real Deal", new AutonomousSequence(4));
		autoChooser->AddObject("Only Mobility", new AutoDrive(2.0));  // feet
		autoChooser->AddObject("One Ball - Not Hot", new AutoOneBallNotHot());
		autoChooser->AddObject("One Ball - Rotate Left - Not Hot", new AutoOneBallLeftNotHot());
		autoChooser->AddObject("One Ball - Rotate Right - Not Hot", new AutoOneBallRightNotHot());
		autoChooser->AddObject("Rotate Left", new Rotate(false));
		autoChooser->AddObject("Rotate Right", new Rotate(true));
		autoChooser->AddObject("Two Ballalisciousness - Not Hot", new AutoTwoBallNotHot());
		
		
		SmartDashboard::PutData("Autonomous Modes", autoChooser);
		SmartDashboard::PutString("Is Shooter Disabled:", "no");
	}
	
	virtual void AutonomousInit() {
		autonomousCommand = (Command *) autoChooser->GetSelected();
		autonomousCommand->Start();
		CommandBase::eyecandy->SetAlliance(DriverStation::GetInstance()->GetAlliance());
		CommandBase::eyecandy->AlliancePattern();
		CommandBase::chassis->TurnOnCameraLed();
//		alliancePattern = new AlliancePattern;
//		alliancePattern->Start();
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		autonomousCommand->Cancel();
		RC->Start();
//		CS->Start();
//		alliancePattern = new AlliancePattern;
//		alliancePattern->Start();
		CommandBase::eyecandy->SetAlliance(DriverStation::GetInstance()->GetAlliance());
		CommandBase::eyecandy->AlliancePattern();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TestPeriodic() {
		lw->Run();
	}
	
	virtual void DisabledInit() {
		CommandBase::eyecandy->RainbowPattern();
		CommandBase::chassis->TurnOffCameraLed();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

