#ifndef POSITION_H
#define POSITION_H

#include <iostream>
#include <sstream>

//Class 'Position' used to give and manipulate the coordinates of start, end and current position
class Position{
private:
    int x, y;

public:
    //Constructors
    Position(): x{0}, y{0}{}
    Position(int posX, int posY): x{posX}, y{posY}{}
    
    //Get functions
    int getX() {return x;}
    int getY() {return y;}
    //Set functions
    void setX(int posX) {x = posX;}
    void setY(int posY) {y = posY;}
    
    //Operator overloading
    bool operator==(Position pos);
    bool operator!=(Position pos);
    
    std::string to_string();
};

#include "Position.hpp"

#endif