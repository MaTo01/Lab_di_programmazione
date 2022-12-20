#ifndef ROBOT_H
#define ROBOT_H

#include "Maze.h"
#include "Position.h"

//Class 'Robot' implemented by the derivate classes 'RandomRobot' and 'RightHandRuleRobot'. 
//Rapresents a robot and all the ways it can solve a maze 
class Robot{
public:
    //Constructor
    Robot() = default;
    //Destructor
    virtual ~Robot() = 0;

    //pure virtual function to override
    virtual void move(Maze &maze) = 0;
};

Robot::~Robot(){}
    
#endif