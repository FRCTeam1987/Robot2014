#include "OI.h"
#include "Commands/Intake/ForwardIntakeMotor.h"
#include "Commands/Intake/ReverseIntakeMotor.h"
#include "Commands/Intake/StopIntakeMotor.h"
#include "Commands/Intake/RaiseIntakeArm.h"
#include "Commands/Intake/LowerIntakeArm.h"
#include "Commands/Chassis/ShiftUp.h"
#include "Commands/Chassis/ShiftDown.h"
#include "Commands/Shooter/EngageShooterLatch.h"
#include "Commands/Shooter/ReleaseShooterLatch.h"
#include "Commands/Shooter/EngageShooterBrake.h"
#include "Commands/Shooter/ReleaseShooterBrake.h"
#include "Commands/Intake/ExtendCollector.h"
#include "Commands/Intake/RetractCollector.h"
#include "Commands/Intake/CheckIntakeSensors.h"
#include "Commands/Shooter/CheckShooterSensors.h"
#include "Commands/PassBall.h"
#include "Commands/Shooter/PrimeShooterSequence.h"
#include "Commands/Shooter/RelatchShooter.h"
#include "Commands/Shooter/StopWinchMotor.h"
#include "Commands/Shooter/ForwardWinchMotor.h"
#include "Commands/Shooter/BackWinchMotor.h"
#include "Commands/Shooter/Shoot.h"
#include "Commands/Shooter/BackWinchForLatching.h"
#include "Commands/PitConfiguration.h"
#include "Commands/MatchConfiguration.h"
#include "Commands/Intake/RunCollector.h"
#include "Commands/ExampleCommand.h"
#include "Commands/Chassis/CheckChassisSensors.h"
#include "Commands/EyeCandy/AlliancePattern.h"
#include "Commands/EyeCandy/DisabledPattern.h"
#include "Commands/EyeCandy/RainbowPattern.h"
#include "Commands/EyeCandy/ShootPattern.h"
#include "Commands/EndOfMatchCommand.h"
#include "BroncoJoy.h"
#include "Subsystems/Shooter.h"
#include "Robotmap.h"


#include "XboxController.h"


OI::OI() {
	
	
	stick1 = new BroncoJoy(1);
	stick2 = new BroncoJoy(2);
	xbox1 = new XboxController(3);
	
//	xboxLowerCollector = new JoystickButton(xbox1, XBOX_RAISE_INTAKE);
	xboxCollect = new JoystickButton(xbox1, XBOX_X);
	xboxPass = new JoystickButton(xbox1, XBOX_Y);
	xboxPrimeGoal = new JoystickButton(xbox1, XBOX_A);
	xboxPrimeUnprime = new JoystickButton(xbox1, XBOX_B);
	xboxShift = new JoystickButton(xbox1, XBOX_LEFT_STICK_CLICK);
	xboxShoot = new JoystickButton(xbox1, XBOX_RIGHT_BUMPER);
	xboxTest = new JoystickButton(xbox1, XBOX_LEFT_BUMPER);
	
	////////////////////////////////////////////////////////////////////////////////////
	
	raiseIntakeButton = new JoystickButton(stick1, RAISE_INTAKE_BUTTON);
	lowerIntakeButton = new JoystickButton(stick1, LOWER_COLLECTOR_BUTTON);
	
	collectorButton = new JoystickButton(stick1, COLLECTOR_BUTTON);
	
	passBallButton = new JoystickButton(stick1, PASS_BALL_BUTTON);
	
	primeCompositeButton = new JoystickButton(stick1, PRIME_COMPOSITE_BUTTON);
	primeTrussButton = new JoystickButton(stick1, PRIME_TRUSS_BUTTON);
	primeGoalButton = new JoystickButton(stick1, PRIME_GOAL_BUTTON);
	
	relatchShooterButton = new JoystickButton(stick1, RELATCH_SHOOTER_BUTTON);
	fireShooterButton = new JoystickButton(stick1, FIRE_SHOOTER_BUTTON);
	
	shiftUpButton = new JoystickButton(stick1, SHIFT_UP_BUTTON);
	shiftDownButton = new JoystickButton(stick1, SHIFT_DOWN_BUTTON);
	
	endOfMatchButton = new JoystickButton(stick1, END_OF_MATCH_BUTTON);
		
	
	/////////////////////////////////////////////////////////////////////
	
	stopWinchButton = new JoystickButton(stick2, STOP_WINCH_BUTTON);
	forwardWinchButton = new JoystickButton(stick2, FORWARD_WINCH_BUTTON);
	backWinchButton = new JoystickButton(stick2, BACK_WINCH_BUTTON);
	
	engageLatchButton = new JoystickButton(stick2, ENGAGE_LATCH_BUTTON);
	releaseLatchButton = new JoystickButton(stick2, RELEASE_LATCH_BUTTON);
	
	forwardIntakeButton = new JoystickButton(stick2, FORWARD_INTAKE_BUTTON);
	reverseIntakeButton = new JoystickButton(stick2, REVERSE_INTAKE_BUTTON);
	stopIntakeButton = new JoystickButton(stick2, STOP_INTAKE_BUTTON);
	
	pitConfigButton = new JoystickButton(stick2, PIT_CONFIG_BUTTON);
	
	engageBrakeButton = new JoystickButton(stick2, ENGAGE_BRAKE_BUTTON);
	releaseBrakeButton = new JoystickButton(stick2, RELEASE_BRAKE_BUTTON);
		
	
//////////////////////////////////////////////////////////////////////////////////
	
//	xboxLowerCollector->WhileHeld(new ForwardIntakeMotor());
	xboxCollect->WhenPressed(new RunCollector());
	xboxCollect->WhenReleased(new RetractCollector());
	xboxPass->WhileHeld(new ForwardIntakeMotor());
	xboxPrimeGoal->WhenPressed(new PrimeShooterSequence(Shooter::POSITION_GOAL));
	xboxPrimeUnprime->WhenPressed(new RelatchShooter());
	xboxShift->WhenPressed(new ShiftUp());
	xboxShift->WhenReleased(new ShiftDown());
	xboxShoot->WhenPressed(new Shoot());
	//xboxTest->WhenPressed(new ExampleCommand());
	xboxTest->WhileHeld(new ExtendCollector());
	
//////////////////////////////////////////////////////////////////////////////////
	
	stopWinchButton->WhenPressed(new StopWinchMotor());
	forwardWinchButton->WhenPressed(new ForwardWinchMotor());
	backWinchButton->WhenPressed(new BackWinchMotor());
	
	engageLatchButton->WhenPressed(new EngageShooterLatch());
	releaseLatchButton->WhenPressed(new ReleaseShooterLatch());
	
	engageBrakeButton->WhenPressed(new EngageShooterBrake());
	releaseBrakeButton->WhenPressed(new ReleaseShooterBrake());
	
	collectorButton->WhenPressed(new RunCollector());
	collectorButton->WhenReleased(new RetractCollector());
	
	shiftUpButton->WhenPressed(new ShiftUp());
	shiftDownButton->WhenPressed(new ShiftDown());
	
	passBallButton->WhenPressed(new PassBall());
	passBallButton->WhenReleased(new RetractCollector());
	
	forwardIntakeButton->WhenPressed(new ForwardIntakeMotor());
	reverseIntakeButton->WhenPressed(new ReverseIntakeMotor());
	stopIntakeButton->WhenPressed(new StopIntakeMotor());
	
	raiseIntakeButton->WhenPressed(new RaiseIntakeArm());
	lowerIntakeButton->WhenPressed(new LowerIntakeArm());
	
	primeCompositeButton->WhenPressed(new PrimeShooterSequence(Shooter::POSITION_UNPRIMED));
	primeTrussButton->WhenPressed(new PrimeShooterSequence(Shooter::POSITION_TRUSS));
	primeGoalButton->WhenPressed(new PrimeShooterSequence(Shooter::POSITION_GOAL));
	
	fireShooterButton->WhenPressed(new Shoot());
	
	pitConfigButton->WhenPressed(new PitConfiguration());
	
	endOfMatchButton->WhenPressed(new ForwardIntakeMotor());
	endOfMatchButton->WhenReleased(new StopIntakeMotor());
	endOfMatchButton->WhenReleased(new PrimeShooterSequence(Shooter::POSITION_UNPRIMED));
	
	relatchShooterButton->WhenPressed(new RelatchShooter());
	

	///////////////////////////////////////////////////////////////////////////////////
	
	SmartDashboard::PutData("Lower Collector", new LowerIntakeArm());
	SmartDashboard::PutData("Raise Collector", new RaiseIntakeArm());
	SmartDashboard::PutData("Forward Intake Motor", new ForwardIntakeMotor());
	SmartDashboard::PutData("Reverse Intake Motor", new ReverseIntakeMotor());
	SmartDashboard::PutData("Stop Intake Motor", new StopIntakeMotor());
	SmartDashboard::PutData("Shift up", new ShiftUp());
	SmartDashboard::PutData("Shift Down", new ShiftDown());
	SmartDashboard::PutData("Engage Shooter Latch", new EngageShooterLatch());
	SmartDashboard::PutData("Release Shooter Latch", new ReleaseShooterLatch());
	SmartDashboard::PutData("Engage Shooter Brake", new EngageShooterBrake());
	SmartDashboard::PutData("Release Shooter Brake", new ReleaseShooterBrake());
	SmartDashboard::PutData("Prime Shooter - Unprimed", new PrimeShooterSequence(Shooter::POSITION_UNPRIMED));
	SmartDashboard::PutData("Prime Shooter - Truss", new PrimeShooterSequence(Shooter::POSITION_TRUSS));
	SmartDashboard::PutData("Prime Shooter - Goal", new PrimeShooterSequence(Shooter::POSITION_GOAL));
	SmartDashboard::PutData("Relatch Shooter", new RelatchShooter());
	SmartDashboard::PutData("Shoot Command Sequence", new Shoot());
	SmartDashboard::PutData("Pit Kunphiguraeshion", new PitConfiguration());
	SmartDashboard::PutData("Winch Motor Forward", new ForwardWinchMotor());
	SmartDashboard::PutData("Winch Motor Back", new BackWinchMotor());
	SmartDashboard::PutData("Winch Motor Stop", new StopWinchMotor());
	SmartDashboard::PutData("Match Configuration", new MatchConfiguration());
	SmartDashboard::PutData("Back Winch For Latching", new BackWinchForLatching());
	SmartDashboard::PutData("Check Chassis Sensors", new CheckChassisSensors());
	SmartDashboard::PutData("Check Shooter Sensors", new CheckShooterSensors());
	SmartDashboard::PutData("Check Intake Sensors", new CheckIntakeSensors());
	SmartDashboard::PutData("Eye Candy - Disabled", new DisabledPattern());
	SmartDashboard::PutData("Eye Candy - Rainbow", new RainbowPattern());
	SmartDashboard::PutData("Eye Candy - Alliance", new AlliancePattern());
	SmartDashboard::PutData("Eye Candy - Shoot", new ShootPattern());
	SmartDashboard::PutData("Example Command", new ExampleCommand());

}

Joystick * OI::GetJoystick()
{
	return stick1;
}

XboxController * OI::GetXbox(){
//	printf("X: %f  Y: %f \n", xbox1->GetRightJoyX(), xbox1->GetRightJoyY());	
	return xbox1;
}
