#include <iostream>

void printeReference(const int& i, const double& d){
    
    std::cout<<"intero : "<<i<<std::endl
             <<"double : "<<d<<std::endl;
}

void printPointer(int* i, double* d){
    
    std::cout<<"intero : "<<i<<std::endl
             <<"double : "<<d<<std::endl;
}

int main(){
    
    int i = 2;
    double d = 2.2;
    std::cout<<"Passaggio per const reference"<<std::endl;
    printeReference(i,d);
    std::cout<<std::endl<<std::endl<<"Passaggio per puntatore"<<std::endl;
    printPointer(&i,&d);
    
    return 0;
}