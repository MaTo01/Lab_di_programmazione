#ifndef POSITION_HPP
#define POSITION_HPP

bool Position::operator==(Position pos){
    return(this->x == pos.getX() && this->y == pos.getY());
}

bool Position::operator!=(Position pos){
    return(this->x != pos.getX() || this->y != pos.getY());
}

std::string Position::to_string() {
    std::stringstream ss;
    ss << ("(" + std::to_string(x) + ", " + std::to_string(y) + ")");
    return ss.str();
}

#endif