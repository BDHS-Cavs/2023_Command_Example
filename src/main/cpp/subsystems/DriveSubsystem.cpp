// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubsystem.h"

#include "Constants.h"

using namespace DriveConstants;

DriveSubsystem::DriveSubsystem(){

  // We need to invert one side of the drivetrain so that positive voltages
  // result in both sides moving forward. Depending on how your robot's
  // gearbox is constructed, you might have to invert the left side instead.
  m_frontRight.SetInverted(true);
  m_rearRight.SetInverted(true);
}

void DriveSubsystem::Periodic() {

}

void DriveSubsystem::Drive(double xSpeed, double ySpeed){
   m_drive.ArcadeDrive(xSpeed, ySpeed);
}
