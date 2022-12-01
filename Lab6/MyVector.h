#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>

template<typename T>
class MyVector{

private:
    
    /*rispettivamente: * dimensione fisica del vettore
                       * dimensione logica del vettore
                       * puntatore agli elementi del vettore
                    
    Le prime due sono unsigned long long per evitare narrowing 
    nell'init list e per consentire anche dimensioni elevate 
    */
    unsigned long long capacity;
    unsigned long long size;
    T* ptr; 
    
public:

    /* costruttori */
    MyVector();
    MyVector(unsigned int size);
    MyVector(const std::initializer_list<T>& list);
    MyVector(const MyVector& v);
    MyVector(MyVector&& v);
    /* distruttore */
    ~MyVector() {delete[] ptr;}
    
    /* get functions */
    int getSize() const {return size;}
    int getCapacity() const {return capacity;}
    bool isEmpty() const {return (size == 0);} 
    
    /* operatori con overloading */
    T& operator[](int index) {return ptr[index];}
    const T& operator[](unsigned int index) const {return ptr[index];}
    MyVector<T>& operator=(MyVector<T>);
    MyVector<T>& operator=(MyVector<T>&& v);
    
    /* funzioni membro */
    void pushBack(const T& value);
    void popBack();
    void reserve(unsigned int capacity);
    T& at(unsigned int index);
    const T& at(unsigned int index) const;
    void printVector();
    
};

#endif