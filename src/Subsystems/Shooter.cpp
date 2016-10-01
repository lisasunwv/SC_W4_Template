#include "Shooter.h"
#include "RobotMap.h"

Shooter::Shooter() :
		Subsystem("Shooter"), shooterMotor1(new Talon(SHOOTER_MOTOR1 )),shooterMotor2(new Talon(SHOOTER_MOTOR2))
{

}
void Shooter::shootBall(float speed){
	shooterMotor1 ->Set(speed);
	shooterMotor2 ->Set(speed);
}
void Shooter::BrakeShooterMotor()

{

	 shooterMotor1->Set(0);

	 shooterMotor2->Set(0);

}

Shooter::~Shooter(){

}

void Shooter::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
