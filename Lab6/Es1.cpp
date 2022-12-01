#include "MyVector.h"
#include "MyVector.cpp"
#include <iostream>

int main(){
    
    /* test costruttore di default e template */
    std::cout << std::endl << "== Creo un vettore di double con costruttore di default ==" << std::endl;
    MyVector<double> v;
    /* test di stampa */
    std::cout << "v: ";
    v.printVector();
    /* test get funtions */
    std::cout << "Capacita': " << v.getCapacity() << std::endl;
    std::cout << "Dimensione logica: " << v.getSize() << std::endl;
    std::cout << "E' vuoto?" << (v.isEmpty()?" SI":" NO") << std::endl;
    
    /* test costruttore con un argomento int */
    std::cout << std::endl << "== Creo un vettore di interi vuoto e capacita' 3 ==" << std::endl;
    MyVector<int> v2(3);
    std::cout << "v2: ";
    v2.printVector();
    std::cout << "Capacita': " << v2.getCapacity() << std::endl;
    std::cout << "Dimensione logica: " << v2.getSize() << std::endl;
    std::cout << "E' vuoto?" << (v2.isEmpty()?" SI":" NO") << std::endl;
    /* test reserve()*/
    std::cout << "Gli riservo 5 spazi" << std::endl;
    v2.reserve(5);
    std::cout << "Capacita': " << v2.getCapacity() << std::endl;
    std::cout << "Dimensione logica: " << v2.getSize() << std::endl;
    std::cout << "E' vuoto?" << (v2.isEmpty()?" SI":" NO") << std::endl;

    
    /* test costruttore con init list */
    std::cout << std::endl << "== Creo un vettore di 5 stringe ==" << std::endl;
    MyVector<std::string> v3 = {"Bjarne","Stroustrup","miglior","programmatore","di sempre"};
    std::cout << "v3: ";
    v3.printVector();
    std::cout << "Capacita': " << v3.getCapacity() << std::endl;
    std::cout << "Dimensione logica: " << v3.getSize() << std::endl;
    std::cout << "E' vuoto?" << (v3.isEmpty()?" SI":" NO") << std::endl;
    
    /* test costruttore di copia */
    std::cout << std::endl << "== Copio l'ultimo vettore creato ==" << std::endl;
    MyVector<std::string> v4 {v3};
    std::cout << "v4: ";
    v4.printVector();
    std::cout << "Capacita': " << v4.getCapacity() << std::endl;
    std::cout << "Dimensione logica: " << v4.getSize() << std::endl;
    std::cout << "E' vuoto?" << (v4.isEmpty()?" SI":" NO") << std::endl;
    
    /* test operator[] */
    std::cout << std::endl << "== Verifica tramite operator[] degli elementi ==" << std::endl;
    std::cout << "v3[0] = Bjarne ? " << (v3[0] == "Bjarne"?"SI":"NO") << std::endl; 

    /* test pushBack() */
    std::cout << std::endl << "== Provo un pushBack() ==" << std::endl;
    v3.pushBack("(forse)");
    std::cout << "v3: ";
    v3.printVector();
    std::cout << "Capacita': " << v3.getCapacity() << std::endl;
    std::cout << "Dimensione logica: " << v3.getSize() << std::endl;
    
    /* test popBack() */
    std::cout << std::endl << "== Provo un popBack() ==" << std::endl;
    v3.popBack();
    std::cout << "v3: ";
    v3.printVector();
    std::cout << "Capacita': " << v3.getCapacity() << std::endl;
    std::cout << "Dimensione logica: " << v3.getSize() << std::endl;
    
    /* test at() */
    std::cout << std::endl << "== Cambio un dato del vettore con at() ==" << std::endl;
    v3.at(2) = "peggior";
    std::cout << "v3: ";
    v3.printVector();
    std::cout << "Capacita': " << v3.getCapacity() << std::endl;
    std::cout << "Dimensione logica: " << v3.getSize() << std::endl;
    
    std::cout << std::endl << "== Verifico un dato del vettore con at() ==" << std::endl;
    try {
        std::cout << "Programmatore in questione: " << v3.at(0) << std::endl;
        if(v3.at(0) == "Bjarne") {std::cout << "Hai osato dare dell'incompetente a Bjarne?" << std::endl;}
    }
    catch(std::invalid_argument const& e) {std::cerr << e.what() << std::endl;}
    
    /* test eccezioni */
    std::cout << std::endl << "== E se vado fuori indice con at()? ==" << std::endl;
    try {v3.at(5) = "(decisamente)";}
    catch(std::invalid_argument const& e) {std::cerr << e.what() << std::endl;}
 
    std::cout << std::endl << "== E se riservo una capacita' minore di quella del vettore?==" << std::endl;
    try {v3.reserve(2);}
    catch(std::invalid_argument const& e) {std::cerr << e.what() << std::endl;}
    
    std::cout << std::endl << "== Termine del programma tester! ==" << std::endl;
    
	return 0;
}
