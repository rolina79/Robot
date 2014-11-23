#include Accumulator.h

Accumulator::accumulator():
	accumulateVic((uint32_t) PORT_ACCUMULATOR_VIC_7) {

}
void Accumulator::runCommand(RobotCommand newCommand) {
	switch (newCommand.getMethod().accumulatorMethod) {
		case RobotCommand::STOP:
			state = NOT_ACCUMULATING;
		break;
		case RobotCommand::ACCUMULATE:
			state = ACCUMULATING;
		break;
		case RobotCommand::PASS:
			state = PASSING;
		break;
	}
}

void Accumulator::update(){

}
