#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>

class MyVector{

public:

    /* costruttori */
    MyVector();
    MyVector(unsigned int size);
    /* PER UNA CLASSE VECTOR PIU' COMPLESSA, il terzo lab non vuole implementare std::vector completamente
    MyVector(std::initializer_list<double> list);
    MyVector(const MyVector& v);
    MyVector(MyVector&& v);
    */
    /* distruttore */
    ~MyVector() {delete[] ptr;}
    
    /* get functions */
    int getCapacity() const {return capacity;}
    bool isEmpty() const {return (capacity == 0?"SI":"NO");} 
    
    /* funzioni di accesso sicuro */
    double safeGet(const int index);
    void safeSet(const int index, const double elem);
    
    /* operator[] */
    double& operator[](int index) {return ptr[index];}
    double operator[](int index) const {return ptr[index];}
    /*
    MyVector& operator=(const MyVector& v);
    MyVector& operator=(MyVector&& v);
    */
    
    /*
    void pushBack(const double& value);
    void popBack();
    void reserve(unsigned int capacity);
    MyVector at(unsigned int index);
    const MyVector& at(unsigned int index) const;
    */

    /* stampa del vettore */
    void printVector();
    
    class Invalid{};

private:

    unsigned int capacity;
    double* ptr; 
    
};

#endif
