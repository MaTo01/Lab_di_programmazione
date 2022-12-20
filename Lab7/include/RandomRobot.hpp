#ifndef RANDOMROBOT_HPP
#define RANDOMROBOT_HPP

#ifdef _WIN32
#  include <Windows.h>
#  define sleep_function         Sleep
#  define time_multiplier        1
#else
#  include <unistd.h>
#  define sleep_function         usleep
#  define time_multiplier        1000
#endif

//This function goes on a loop untill the maze is solved
void RandomRobot::move(Maze &maze){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0,3); //a random generator of numbers that goes from 0 to 3
    int count = 0;
    
    while(!maze.isFinished()){
        int direction = dis(gen);
        if(direction == 0){ //0 = up
            if(maze.canMoveUp()) {
                maze.moveUp();
                steps++;
                //I'm printing once every 10 moves because this method can take
                //several steps to solve the maze and would be time consuming
                if(count == 0 || count%10 == 0){
                    sleep_function(time_multiplier * 150);
                    maze.printMaze();
                }
            }
        }else if(direction == 1){//1 = right
            if(maze.canMoveRight()) {
                maze.moveRight();
                steps++;
                if(count == 0 || count%10 == 0){
                    sleep_function(time_multiplier * 150);
                    maze.printMaze();
                }
            }
        }else if(direction == 2){//2 = left
            if(maze.canMoveLeft()) {
                maze.moveLeft();
                steps++;
                if(count == 0 || count%10 == 0){
                    sleep_function(time_multiplier * 150);
                    maze.printMaze();
                }
            }
        }else if(direction == 3){//3 = down
            if(maze.canMoveDown()) {
                maze.moveDown();
                steps++;
                if(count == 0 || count%10 == 0){
                    sleep_function(time_multiplier * 150);
                    maze.printMaze();
                }
            }
        }
        count++;
    }
    
    std::cout << "\nCongratulations! The robot completed the maze in " 
              << steps << " steps" << std::endl;
            
    std::cout << "\nPath:" << std::endl;
    maze.printPath(); //print the path of the visited positions
    maze.reset(); //restore the maze to his unsolved state
}

#endif