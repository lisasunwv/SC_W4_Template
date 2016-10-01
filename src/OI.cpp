#include "OI.h"
#include "RobotMap.h"

OI::OI()
:driveStick(new Joystick(JORSTICK_PORT)) //JOYSTICK = constant 0
{
	// Process operator interface input here.
	Button* intakeBallButton = new JoystickButton(driveStick,1);
	Button* shootBallButton = new JoystickButton(driveStick,2);

	intakeBallButton ->WhenPressed(new TakeBall());
	intakeBallButton ->WhenReleased(new StopAcquirer());

	shootBallButton ->WhenPressed(new ShootBall());
	shootBallButton ->WhenReleased(new BrakeShooter());


}

 Joystick* OI::getJoystick(){
	 return driveStick;
}
