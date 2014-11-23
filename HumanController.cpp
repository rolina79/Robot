#include "HumanController.h"

HumanController::HumanController(Robot ropointer) :
#if JOYSTICKCONTROLLER
			speedStick((uint32_t) PORT_SPEED), 
			turnStick((uint32_t) PORT_TURN), 
			operatorStick((uint32_t) PORT_OPERATOR)
#elif XBOXCONTROLLER
			xbox((uint32_t)PORT_XBOX)
#endif

{
#if JOYSTICKCONTROLLER
  	prevZ = false;
  	prevStop = false;
  	lastOutButton = false;
	lastManualFireButton = false;
	lastManualLoadButtn = false;
  	manualControl = false;
  	lastManualButton = false;
#endif

void HumanController::undate
void argP=maloc(DriveArgs)
if (abs(getTurnStick()) <= .1 && abs(getSpeedStick()) <= .1) {
		((*DriveArgs) argP)->speedVal = getSpeedStick();
		RobotCommand::Method setSpeed;
		setSpeed.driveMethod = RobotCommand::SETSPEED;
		RobotCommand speedCommand(RobotCommand::DRIVE, setSpeed, argPointer);
		robot->setCommand(speedCommand);

		((DriveArgs*) argPointer) -> rotSpeed = 0;
		RobotCommand::Method rotSpeed;
		rotSpeed.driveMethod = RobotCommand::ROTATESPEED;
		RobotCommand rotateCommand(RobotCommand::DRIVE, rotSpeed, argPointer);
		robot->setCommand(rotateCommand);
	}
	if (abs(getSpeedStick()) > 0.1) {
		((DriveArgs*) argPointer)->speedVal = getSpeedStick();
		RobotCommand::Method setSpeed;
		setSpeed.driveMethod = RobotCommand::SETSPEED;
		RobotCommand speedCommand(RobotCommand::DRIVE, setSpeed, argPointer);
		robot->setCommand(speedCommand);
	}

	if (abs(getTurnStick()) > 0.1) {
		((DriveArgs*) argPointer) -> rotSpeed = getTurnStick();
		RobotCommand::Method rotSpeed;
		rotSpeed.driveMethod = RobotCommand::ROTATESPEED;
		RobotCommand rotateCommand(RobotCommand::DRIVE, rotSpeed, argPointer);
		robot->setCommand(rotateCommand);
	}
