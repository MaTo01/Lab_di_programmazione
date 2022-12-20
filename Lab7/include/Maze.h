#ifndef MAZE_H
#define MAZE_H

#include "Position.h"
#include <iostream>
#include <fstream>

/* The coordinates of the maze are managed in this way

 ----------------> Y
 | [][][][] ...
 | [][][][]
 | [][][][]
 | [][][][]
 | ...
 |
.\/ X

*/

//Class 'Maze' used to store a maze read from a .txt file and to give some utility functions 
//for the movement inside the maze
class Maze{
private:
    //Maze dimension
    static const int size = 9;

    //A 2d array to store the maze and the other one to store the visited positions 
    char matrix[size][size];
    char visited[size][size];

    //Some useful varaibles to manage the functions as well as possible
    Position startPos, endPos, currentPos;
    const char wall = '*';
    
public:
    //Constructor
    Maze(const std::string &file);
    
    //Get functions
    Position getStartPos() {return startPos;}
    Position getEndPos() {return endPos;}
    Position getCurrentPos() {return currentPos;}
    int getSize() {return size;}
    
    //Member functions
    bool isFinished() {return currentPos == endPos;}
    bool isValidMove(Position pos);
    bool isWall(Position pos);
    bool isVisited(Position pos) {return visited[pos.getX()][pos.getY()] == 'X';}
    bool canMoveUp();
    bool canMoveDown();
    bool canMoveRight();
    bool canMoveLeft();
    void moveUp();
    void moveDown();
    void moveRight();
    void moveLeft();
    void moveTo(Position pos) {currentPos = pos;}
    
    void printMaze();
    void printPath();
    void reset();
};

#include "Maze.hpp"

#endif