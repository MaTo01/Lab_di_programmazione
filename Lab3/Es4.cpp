#include "MyVector.h"
#include <iostream>

int main(){
        
    MyVector v = MyVector(10);
    v.printVector();
    
    std::cout << std::endl;
    std::cout << "Assegno il valore 5 all'indice 3 senza safeSet"<<std::endl;
    v[3] = 5;
    v.printVector();
    
    std::cout << std::endl;
    std::cout << "Provo ad assegnare il valore 5 all'indice 10"<<std::endl;
    v.safeSet(10,5);
    std::cout << "Set del valore avvenuto con successo" <<std::endl;
   
    std::cout << std::endl;
    std::cout << "Provo ad assegnare il valore 5 all'indice 8"<<std::endl; 
    v.safeSet(8,5);
    std::cout << "Set del valore avvenuto con successo" <<std::endl;
    v.printVector();
    
    std::cout << std::endl;
    std::cout << "Se provo ad assegnare un valore ad un indice inesistente senza usare il safe settign?"<<std::endl;
    try{
        v[10] = 9;
        std::cout << "Risultato: Valore assegnato con successo"<<std::endl;
        v.printVector();
    }catch(...){
        std::cout << "Ops, un errore!"<<std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "E se stampo senza il safe get quell'indice?"<<std::endl;
    try{
        std::cout << "Risultato: " << v[10]<<std::endl;
        std::cout << "Nessun errore a quanto pare"<<std::endl;
    }catch(...){
        std::cout << "Ops, un errore!"<<std::endl;
    }
    
    std::cout << std::endl;
    std::cout << "Se invece stampo con il safe get quell'indice?"<<std::endl;
    try{
       std::cout << "Risultato: " << v.safeGet(10); 
    }catch(MyVector::Invalid){
       std::cerr<<"Indice inesistente, azione bloccata"<<std::endl;
    }
    return 0;
}