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
			 double leftSpeed;
			 double rightSpeed
			 if(targetSpeed - rotateSpeed<=-1){
			   	leftSpeed=-1;
			 }
			 else if(1<=targetSpeed - rotateSpeed){
			 	leftSpeed=1;
			 }
			 else{
			 	leftSpeed=targetSpeed - rotateSpeed;
			 	
			 }
				leftFrontVic.Set(-leftSpeed*leftSpeed*leftSpeed*leftSpeed);
				leftBackVic.Set(-leftSpeed*leftSpeed*leftSpeed*leftSpeed);
				rightFrontVic.Set(rightSpeed*rightspeed*rightSpeed*rightSpeed);
				rightBackVic.Set(rightSpeed*rightSpeed*rightSpeed);
		break;

	/*	case DRIVETRAIN_DIST:
			leftFrontVic.Set(leftFrontController.Get());
			leftBackVic.Set(leftBackController.Get());
			rightFrontVic.Set(-rightFrontController.Get());
			rightBackVic.Set(-rightBackController.Get());
			break;*/
		case ANGULAR_ANGLE:
		
		break;

		case VICTOR_STOP:
			leftFrontVic.Set(0.0);
			leftBackVic.Set(0.0);
			rightFrontVic.Set(0.0);
			rightBackVic.Set(0.0);
		break;
	}
	void DriveTrain::disable(){
		leftFrontVic.Reset();
		leftBackVic.Reset();
		rightFrontVic.Reset();
		rightBackVic.Reset();
	}
}


	
};
}
