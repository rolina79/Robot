# include DrivrTrain.h

DriveTrain::DriveTrain():
{
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
	void DriveTrain::init() {
	rightFrontController.SetOutputRange(-1, 1);
	leftFrontController.SetOutputRange(-1, 1);
	rightBackController.SetOutputRange(-1, 1);
	leftBackController.SetOutputRange(-1, 1);
	state = VICTORS_STOP;
}
void DriveTrain::update() {

	switch (state) {
		case ROTATE_SPEED:

			/*
			 *Logic: Take speed you want to generally go at (targetSpeed)
			 *Logic: leftVic goes positive, rightVic goes negative
			 *Logic: Vics are restricted to -1,1, so min-max to that range
			 *Logic: Take targetSpeed and add/subtract rotateSpeed for turning
			 *Logic: Right victor is negative because we are turning
			 */
			 double leftSpeed;
			 double rightSpeed
			 if(targetSpeed - rotateSpeed<=-1){
			   leftSpeed
			 }
			 else if()
			 else()
			double leftSpeed = min(max(targetSpeed - rotateSpeed, -1), 1);
			double rightSpeed = min(max(targetSpeed + rotateSpeed, -1), 1);

				leftFrontVic.Set(-leftSpeed*leftSpeed*leftSpeed);
				leftBackVic.Set(-leftSpeed*leftSpeed*leftSpeed);
				rightFrontVic.Set(rightSpeed*leftSpeed*leftSpeed);
				rightBackVic.Set(rightSpeed*leftSpeed*leftSpeed);

//			leftFrontVic.Set(leftFrontController.Get());
//			leftBackVic.Set(leftBackController.Get());
//			rightFrontVic.Set(-rightFrontController.Get());
//			rightBackVic.Set(-rightBackController.Get());
//			std::cout << "leftFrontPID: " << leftFrontController.Get() << std::endl;
//			std::cout << "rightFrontPID: " << rightFrontController.Get() << std::endl;
//			std::cout << "supposed rate: " << leftFrontController.GetSetpoint() << std::endl;
//			std::cout << "targetRate: " << targetRate << std::endl;

		break;

		case ROBOT_DIST:
			rightFrontVic.Set(-rightFrontController.Get());
			rightBackVic.Set(-rightBackController.Get());
			leftFrontVic.Set(leftFrontController.Get());
			leftBackVic.Set(leftBackController.Get());
			break;
		case ANGULAR_ANGLE:
		
		break;

		case VICTOR_STOP:
			leftFrontVic.Set(0.0);
			leftBackVic.Set(0.0);
			rightFrontVic.Set(0.0);
			rightBackVic.Set(0.0);
		break;
	}
}


	
};
}
