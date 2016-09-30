#include "ArcadeDrive.h"
#include "RobotMap.h"
#include "CommandBase.h"
#include "OI.h"

ArcadeDrive::ArcadeDrive()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(drive);
}

// Called just before this Command runs the first time
void ArcadeDrive::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ArcadeDrive::Execute()
{
	double y = oi ->driveStick->GetY();
	double z = oi -> driveStick->GetZ();
	drive -> arcadeDrive(y, z);
}

// Make this return true when this Command no longer needs to run execute()
bool ArcadeDrive::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ArcadeDrive::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArcadeDrive::Interrupted()
{

}
