#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

class DriveTrain {
	private:		
	Victor leftFrontVic;
		Victor leftBackVic;
		Victor rightFrontVic;
		Victor rightBackVic;

	public:
		DriveTrain();
		void update();
		//comking varibles 
		//
		//ENUM?	
		//state
		typedef enum enState{
			ROTATE_SPEED, ANGULAR_ANGLE, VICTOR_STOP;
			
		}
		enState;
		enState state;

	
};
double absolute(double n);
//???
#endif
