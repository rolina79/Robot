#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

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
