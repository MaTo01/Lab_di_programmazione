#ifndef RIGHTHANDRULEROBOT_HPP
#define RIGHTHANDRULEROBOT_HPP

#ifdef _WIN32
#  include <Windows.h>
#  define sleep_function         Sleep
#  define time_multiplier        1
#else
#  include <unistd.h>
#  define sleep_function         usleep
#  define time_multiplier        1000
#endif

//This function moves the robot forward considering his direction
bool RightHandRuleRobot::moveForward(Maze& maze){
    bool check = false;
    if(dir == 'E'){//E = right
        check = maze.canMoveRight();
        if(check){
            maze.moveRight();
            steps++;
            sleep_function(time_multiplier * 150);
            maze.printMaze();            
        }
    }else if(dir == 'N'){//N = up
        check = maze.canMoveUp();
        if(check){ 
            maze.moveUp();
            steps++;
            sleep_function(time_multiplier * 150);
            maze.printMaze();    
        }
    }else if(dir == 'S'){//S = down
        check = maze.canMoveDown();
        if(check){ 
            maze.moveDown();
            steps++;
            sleep_function(time_multiplier * 150);
            maze.printMaze();    
        }
    }else if(dir == 'O'){//O = left
        check = maze.canMoveLeft();
        if(check){
            maze.moveLeft();
            steps++;
            sleep_function(time_multiplier * 150);
            maze.printMaze();    
        }
    }
    
    return check;
}

//Check if the left of the robot is reachable
bool RightHandRuleRobot::freeLeft(Maze& maze){
    if(dir == 'E') {return maze.canMoveUp();}
    else if(dir == 'N') {return maze.canMoveLeft();}
    else if(dir == 'S') {return maze.canMoveRight();}
    else if(dir == 'O') {return maze.canMoveDown();}
    else {return false;}
}

//Check if the left of the robot is reachable
bool RightHandRuleRobot::freeRight(Maze& maze){
    if(dir == 'E') {return maze.canMoveDown();}
    else if(dir == 'N') {return maze.canMoveRight();}
    else if(dir == 'S') {return maze.canMoveLeft();}
    else if(dir == 'O') {return maze.canMoveUp();}
    else {return false;}
}

//Make the robot turn 90° left
void RightHandRuleRobot::turnLeft(){
    if(dir == 'E') {dir = 'N';}
    else if(dir == 'N') {dir = 'O';}
    else if(dir == 'S') {dir = 'E';}
    else if(dir == 'O') {dir = 'S';}
    turn--;
}

//Make the robot turn 90° right
void RightHandRuleRobot::turnRight(){
    if(dir == 'E') {dir = 'S';}
    else if(dir == 'N') {dir = 'E';}
    else if(dir == 'S') {dir = 'O';}
    else if(dir == 'O') {dir = 'N';}
    turn++;
}

//This function goes on a loop until the maze is solved
void RightHandRuleRobot::move(Maze &maze){
    while(!maze.isFinished()){
        if(dir == 'E' && turn == 0){//if dir and turn are setted to the default values
            while(moveForward(maze));//move forward until you reach a wall
            if(freeRight(maze)){//if the right of the robot is free
                turnRight();
                moveForward(maze);
            }else if(freeLeft(maze)){//otherwise if the left of the robot is free
                turnLeft();
                moveForward(maze);
            }else{ //if none of the previous conditions is verified
                turnRight();
                turnRight();
                moveForward(maze);
            }
        }else if(freeRight(maze)){//if the robot is not anymore into his default state and has his right free
            turnRight();
            moveForward(maze);
        }else if(moveForward(maze)){}//otherwise, go on
        else{
            turnLeft();
            moveForward(maze);
        }
    } 
    
    std::cout << "\nCongratulations! The robot completed the maze in " 
              << steps << " steps" << std::endl;
            
    std::cout << "\nPath:" << std::endl;
    maze.printPath(); //print the path of the visited positions
    maze.reset(); //restore the maze to his unsolved state
}

#endif