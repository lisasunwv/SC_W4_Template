#ifndef OI_H
#define OI_H
#include "RobotMap.h"

#include "WPILib.h"

class OI
{
private:
	Joystick* driveStick;
public:
	OI();
	Joystick* getJoystick();


};

#endif
