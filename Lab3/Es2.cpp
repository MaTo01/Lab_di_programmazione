#include <iostream>

void printArrayLength(double* array) {std::cout<<sizeof(array);}

int main(){
    constexpr int size = 5;
    double doubleArray[size] = {};
    
    std::cout<<"Stampa con sizeof: "<<sizeof(doubleArray)<<std::endl; //ATTENZIONE, non stampa la dimensione
                                                                      //dell'array, ma la dimensione di ciò che 
                                                                      //contiene l'array(double in questo caso)
    std::cout<<"Stampa con funzione: ";
    printArrayLength(doubleArray); //NON STAMPA LA DIMENSIONE DELL'ARRAY
    
    return 0;
}
