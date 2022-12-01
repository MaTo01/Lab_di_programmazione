#include "MyVector.h"
#include <iostream>

MyVector::MyVector(){
    size = 0;
    capacity = 0;
    ptr = nullptr;
}

MyVector::MyVector(unsigned int s){
    size = s;
    capacity = s;
    double* p = new double[s];
    ptr = p;
    for(int i = 0; i < s; ++i) {ptr[i] = 0;}
}

MyVector::MyVector(std::initializer_list<double> list)
    : size{list.size()}, capacity{list.size()}, ptr{new double[capacity]}{
        std::copy(list.begin(), list.end(), ptr);
    }
    
MyVector::MyVector(const MyVector& v)
    : size{v.size}, capacity{v.capacity}, ptr{new double[v.capacity]}{
        std::copy(v.ptr, v.ptr+size, ptr);
    }
    
MyVector::MyVector(MyVector&& v) : size{v.size}, capacity{v.capacity}, ptr{v.ptr}{
        v.size = 0;
        v.capacity = 0;
        v.ptr = nullptr;
    }

void MyVector::safeSet(const int index, const double elem){
    if(index > 0 && index < size){
        ptr[index] = elem;
    }
}
double MyVector::safeGet(const int index){
    if(index > 0 && index < size){
        return ptr[index];
    }
    throw Invalid();
}   

MyVector& MyVector::operator=(const MyVector& v){
    double* p = new double[v.size];
    std::copy(v.ptr, v.ptr+v.size, p);
    delete[] ptr;
    ptr = p;
    size = v.size;
    capacity = v.capacity;
    return *this;
}

MyVector& MyVector::operator=(MyVector&& v){
    delete[] ptr;
    ptr = v.ptr;
    size = v.size;
    capacity = v.capacity;
    v.ptr = nullptr;
    v.size = 0;
    v.capacity = 0;
    return *this;
}

void MyVector::pushBack(const double& value){
    if(size >= capacity) {reserve(capacity + 10);}
    ptr[size++] = value;
}

void MyVector::popBack(){
    size--;
}

void MyVector::reserve(unsigned int neededCapacity){
    if(ptr == 0){
        size = 0;
        capacity = 0;
    }
    double* ptr = new double[neededCapacity];
    std::copy(ptr, ptr+size, ptr);
    capacity = neededCapacity;
    delete[] ptr;
    ptr = ptr;
    
}

MyVector MyVector::at(unsigned int index){
    if(index >= size){throw Invalid();}
    else {return ptr[index];}
}

const MyVector& MyVector::at(unsigned int index) const{
    if(index >= size){throw Invalid();}
    else {return ptr[index];}
}

void MyVector::printVector(){
    std::cout << "Vettore: { ";
    for (int i = 0; i < size; i++) {
        std::cout << ptr[i] << " "; 
    }
    std::cout << "}" <<std::endl;
}


