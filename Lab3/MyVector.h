#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>

class MyVector{

public:

    MyVector();
    MyVector(unsigned int size);
    MyVector(std::initializer_list<double> list);
    MyVector(const MyVector& v);
    MyVector(MyVector&& v);
    ~MyVector() {delete[] ptr;}
    
    int getSize() const {return size;}
    int getCapacity() const {return capacity;}
    bool isEmpty() const {return (capacity == 0?"SI":"NO");} 
    
    double safeGet(const int index);
    void safeSet(const int index, const double elem);
    
    double& operator[](int index) {return ptr[index];}
    double operator[](int index) const {return ptr[index];}
    MyVector& operator=(const MyVector& v);
    MyVector& operator=(MyVector&& v);
    
    void pushBack(const double& value);
    void popBack();
    void reserve(unsigned int capacity);
    MyVector at(unsigned int index);
    const MyVector& at(unsigned int index) const;

    void printVector();
    
    class Invalid{};

private:

    unsigned int capacity;
    unsigned int size;
    double* ptr; 
    
};

#endif