/*
 * DriveTrain.h
 *
 *  Created on: Sep 23, 2016
 *      Author: Nir
 */

#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_

class DriveTrain: public Subsystem {
public:
	DriveTrain();
	virtual ~DriveTrain();
	void arcadeDrive(float move, float rotate);
	static float Limit(float num, float max);
	void setMult(float m);
	        int getMult();

private:
	Jaguar* leftMotor;
	Jaguar* rightMotor;
	float mult;
};

#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */
