#include <iostream>

void makeArray(){
    int array[10] = {0};
    int size = sizeof(array)/sizeof(*array);
    int* p = &array[4];
    
    p[-4] = -4;
    p[-3] = -3;
    p[-2] = -2;
    p[-1] = -1;
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    p[3] = 3;
    p[4] = 4;
    p[5] = 5;    
    
    std::cout << "Array valido: [ ";
    for(int i = 0; i < size; i++) {std::cout<<array[i]<<" ";}
    std::cout<<"]"<<std::endl;
}

void invalidArray(){
    int array[10] = {0};
    int size = sizeof(array)/sizeof(*array);
    int* p = &array[4];
    
    p[-40] = -4;
    p[-3] = -3;
    p[-2] = -2;
    p[-1] = -1;
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    p[3] = 3;
    p[4] = 4;
    p[50] = 5;    
    
    std::cout << "Array NON valido: [ ";
    for(int i = 0; i < size; i++) {std::cout<<array[i]<<" ";}
    std::cout<<"]"<<std::endl;
}

int main(){
    makeArray();
    
    try{
        invalidArray(); //NON LANCIA NESSUN ERRORE, GROSSO PROBLEMA
    }catch(...){
        std::cout<<"errore!";
    }
    
    return 0;
}
