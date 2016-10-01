#include "BrakeShooter.h"
#include "RobotMap.h"
#include "CommandBase.h"
#include "Shooter.h"
BrakeShooter::BrakeShooter()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void BrakeShooter::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void BrakeShooter::Execute()
{
	shooter->BrakeShooterMotor();
}

// Make this return true when this Command no longer needs to run execute()
bool BrakeShooter::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void BrakeShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BrakeShooter::Interrupted()
{

}
