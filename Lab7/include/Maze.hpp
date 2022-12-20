#ifndef MAZE_HPP
#define MAZE_HPP

//A filename is passed as an argument, so the constructor can open the file and
//store the maze in the 2d array 
Maze::Maze(const std::string& file){
    std::ifstream fileScan(file); 
    if(fileScan.is_open()){ //go on only if the file had been opened
        for(int i = 0; i < size; i++){
            std::string temp; //temporary variable to store each line of the .txt file
            getline(fileScan, temp);
            for(int j = 0; j < size; j++){
                matrix[i][j] = temp[j];
                visited[i][j] = temp[j];
                if(temp.at(j) == 'S') {
                    startPos = Position(i,j);
                    visited[i][j] = 'X';
                }
                if(temp.at(j) == 'E') {endPos = Position(i,j);}
            }
        }
    }else{
        throw std::runtime_error("File not found");
    }
    fileScan.close();
    currentPos = startPos;
}

bool Maze::isWall(Position pos){
    return matrix[pos.getX()][pos.getY()] == wall;
}

//A move is valid only if that doesn't get the current position out of bound and if
//it doesn't take it to a wall
bool Maze::isValidMove(Position pos){
    return (pos.getX() >= 0 && pos.getX() < size && pos.getY() >= 0 && pos.getY() < size && !isWall(pos));
}

//A series of check to verify if each move is possible
bool Maze::canMoveUp(){
    int x = currentPos.getX();
    int y = currentPos.getY();
    Position pos = Position(x-1,y);
    
    if(pos.getX() >= 0 && !isWall(pos)){
        return true;
    }
    return false;
}
bool Maze::canMoveDown(){
    int x = currentPos.getX();
    int y = currentPos.getY();
    Position pos = Position(x+1,y);
    
    if(pos.getX() < size && !isWall(pos)){
        return true;
    }
    return false;
}
bool Maze::canMoveRight(){
    int x = currentPos.getX();
    int y = currentPos.getY();
    Position pos = Position(x,y+1);
    
    if(pos.getY() < size && !isWall(pos)){
        return true;
    }
    return false;
}
bool Maze::canMoveLeft(){
    int x = currentPos.getX();
    int y = currentPos.getY();
    Position pos = Position(x,y-1);
    
    if(pos.getY() >= 0 && !isWall(pos)){
        return true;
    }
    return false;
}

//Move the current position in each way and mark as visited that position
void Maze::moveUp() {
    currentPos = Position(currentPos.getX()-1,currentPos.getY());
    visited[currentPos.getX()][currentPos.getY()] = 'X';
}
void Maze::moveDown() {
    currentPos = Position(currentPos.getX()+1,currentPos.getY());
    visited[currentPos.getX()][currentPos.getY()] = 'X';
}
void Maze::moveRight() {
    currentPos = Position(currentPos.getX(),currentPos.getY()+1);
    visited[currentPos.getX()][currentPos.getY()] = 'X';
}
void Maze::moveLeft() {
    currentPos = Position(currentPos.getX(),currentPos.getY()-1);
    visited[currentPos.getX()][currentPos.getY()] = 'X';
}

//Print the maze
void Maze::printMaze(){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(Position(i,j) == currentPos) {std::cout << "C";} 
            else {std::cout << matrix[i][j];}
        }
        std::cout << std::endl;    
    }
}

//Print the path made by the robot
void Maze::printPath(){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            std::cout << visited[i][j];
        }
        std::cout << std::endl;    
    }
}

//To solve the maze in more than one way you need to reset the path and the current position 
//after every solution of the maze, so you can go on and solve it in an other way
void Maze::reset(){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(visited[i][j] == 'X') {visited[i][j] = ' ';}
        }   
    }
    currentPos = startPos;
}

#endif