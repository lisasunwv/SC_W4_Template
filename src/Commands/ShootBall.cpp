#include "ShootBall.h"
#include "CommandBase.h"
#include "OI.h"
ShootBall::ShootBall()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(shooter);
}

// Called just before this Command runs the first time
void ShootBall::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ShootBall::Execute()
{
	shooter->shootBall(1);
}

// Make this return true when this Command no longer needs to run execute()
bool ShootBall::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ShootBall::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootBall::Interrupted()
{

}
