// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc/ADXRS450_Gyro.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/interfaces/Gyro.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/motorcontrol/Spark.h>
#include <frc2/command/SubsystemBase.h>

#include "Constants.h"

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();

  void Periodic() override;

  void Drive(double xSpeed, double ySpeed);

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

  // The motor controllers
  frc::Spark m_frontLeft{4};
  frc::Spark m_rearLeft{5};
  frc::MotorControllerGroup m_controllerLeft{m_frontLeft, m_rearLeft};

  frc::Spark m_frontRight{2};
  frc::Spark m_rearRight{3};
  frc::MotorControllerGroup m_controllerRight{m_frontRight, m_rearRight};

  // The robot's drive
  frc::DifferentialDrive m_drive{m_controllerLeft, m_controllerRight};

  // The gyro sensor
  frc::ADXRS450_Gyro m_gyro;
};
