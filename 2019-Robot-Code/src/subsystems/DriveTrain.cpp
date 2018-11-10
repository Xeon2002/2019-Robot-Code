/*
 * DriveTrain.cpp
 *
 *  Created on: Nov 10, 2018
 *      Author: super-tails
 */

#include "subsystems/DriveTrain.h"

DriveTrain::DriveTrain(int frontLeft, int backLeft, int frontRight, int backRight) :
	m_frontLeft(frontLeft),
	m_frontRight(frontRight),
	m_backLeft(backLeft),
	m_backRight(backRight),
	m_lMotors(frontLeft, backLeft),
	m_rMotors(frontRight, backRight),
	m_drive(m_lMotors, m_rMotors)
{

}

void DriveTrain::drive(InputState state) {
	double lSpeed = state.r + state.y;
	double rSpeed = state.r - state.y;
	m_drive.TankDrive(lSpeed, rSpeed);
}
