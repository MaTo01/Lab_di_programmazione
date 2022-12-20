#ifndef RANDOMROBOT_H
#define RANDOMROBOT_H

#include "Robot.h"
#include <random>

//Class 'RandomRobot' derived from 'Robot', used to solve the maze by moving randomly into it, until reaching the exit
class RandomRobot : public Robot {
private: 
    int steps;

public:
    //Constructor
    RandomRobot(): steps{0}{}
    //Destructor
    ~RandomRobot() override = default;

    //Override of the pure virtual function 'move' of the class 'Robot'
    void move(Maze &maze) override;
};

#include "RandomRobot.hpp"

#endif