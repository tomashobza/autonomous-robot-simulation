/**
 * @file autonomousrobot.h
 * @brief This file provides the definition of the AutonomousRobot class.
 * @authors Jakub Všetečka, Tomáš Hobza
 */

#ifndef AUTONOMOUSROBOT_H
#define AUTONOMOUSROBOT_H

#include "robot.h"

class AutonomousRobot : public Robot
{
public:
  AutonomousRobot(QGraphicsItem *parent = nullptr, QPointF pos = QPointF(0, 0), QPointF dimension = QPointF(25, 25), double angle = 0.0, double velocity = 0.0);

  void update() override;

protected:
  double detectDistance = 50;
  double rotationAmount = 30;
  bool rotateRight = true;
  int state = -1;
};

#endif // AUTONOMOUSROBOT_H