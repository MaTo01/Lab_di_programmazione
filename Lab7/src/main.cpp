#include <iostream>
#include "../include/RightHandRuleRobot.h"
#include "../include/RandomRobot.h"

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

//Use: open the terminal and type the command "cd <directory of the project folder>" 
//     or right-click the folder and open it on terminal
//     After that, type "g++ src\main.cpp -o test -I include\RightHandRuleRobot.h -I include\RandomRobot.h"
//     To test the program, type ".\test"
//     Make sure to use the CMake extension to compile this project in every platform

int main(){ 
    std::cout << "\nReading and storing the maze from the .txt file:" << std::endl;
    std::cout.flush();
    Maze maze("Maze.txt");
    sleep_function(1500);
    maze.printMaze();

    std::cout << "\nLet's create a robot that solves this maze by moving randomly into it" << std::endl;
    std::cout.flush();
    RandomRobot randomRobot;
    sleep_function(1500);
    randomRobot.move(maze);
     
    std::cout << "\nLet's create a robot that solves this maze by following the wall on his right" << std::endl;
    std::cout.flush();
    RightHandRuleRobot rightHandRuleRobot;
    sleep_function(1500);
    rightHandRuleRobot.move(maze);
    
    return 0;
}
