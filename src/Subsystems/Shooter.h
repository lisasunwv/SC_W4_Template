#ifndef Shooter_H
#define Shooter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Shooter: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon* shooterMotor1;
	Talon* shooterMotor2;

public:
	Shooter();
	virtual ~Shooter();
	void InitDefaultCommand();
	void shootBall(float speed);
	void BrakeShooterMotor();
};

#endif
