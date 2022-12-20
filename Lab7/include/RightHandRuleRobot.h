#ifndef RIGHTHANDRULEROBOT_H
#define RIGHTHANDRULEROBOT_H

#include "Robot.h"

//Class 'RightHandRuleRobot' derived by 'Robot', used to solve the maze with the right hand rule:
//the robot always need to have a wall on his right
class RightHandRuleRobot : public Robot{
private:
    char dir; //direction of the robot: N = up, S = down, O = left, E = right
    int turn, steps;

public:
    //Construcotr
    RightHandRuleRobot(): dir{'E'}, turn{0}, steps{0}{}//the start direction of the robot is setted to E
    //Destructor
    ~RightHandRuleRobot() override = default;

    //Member functions
    bool moveForward(Maze& maze);
    bool freeLeft(Maze& maze);
    bool freeRight(Maze& maze);
    void turnLeft();
    void turnRight();
    //Override of the pure virtual function 'move' of the class 'Robot'
    void move(Maze &maze) override;

};

#include "RightHandRuleRobot.hpp"

#endif