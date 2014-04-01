#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Intake.h"
#include "Subsystems/Pneumatics.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/EyeCandy.h"
#include "OI.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static ExampleSubsystem *examplesubsystem;
	static Chassis *chassis;
	static Intake *intake;
	static Pneumatics *compressor;
	static Shooter *shooter;
	static OI *oi;
	static EyeCandy *eyecandy;
};

#endif
