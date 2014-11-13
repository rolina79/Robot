#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Constants.h"
#include <WPILib.h>
#include "RobotCommand.h"
#include <stdlib.h>
#include <iostream>

class DriveTrain {
	private:		
	Victor leftFrontVic;
		Victor leftBackVic;
		Victor rightFrontVic;
		Victor rightBackVic;

		Encoder leftEnc;
		Encoder rightEnc;
};
#endif
