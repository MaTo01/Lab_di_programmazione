#include "MyVector.h"
#include <iostream>

/* costruttore di default */
//inizializzo questo vettore con capacità 1 per mantenere 
//lo standard di buffer maggiore del contenuto
template<typename T>
MyVector<T>::MyVector() : capacity{1}, size{0}, ptr{nullptr}{}

/* costruttore con argomento int*/
//inizializzo un vettore con capacità s e contenuto nullo
template<typename T>
MyVector<T>::MyVector(unsigned int s) : capacity{s}, size{0}, ptr{new T[capacity]}{}

/* costruttore con initializer list */
//non imposto una capacità maggiore del contenuto, in un
//caso reale potrebbe venir creato un vettore di questo tipo
//senza subire modifiche succesive, perciò sarebbe uno 
//spreco di memoria assegnargli più capacità
//In ogni caso, la capacità viene maggiorata al primo pushBack
//di questo vettore
template<typename T>
MyVector<T>::MyVector(const std::initializer_list<T>& list)
    : capacity{list.size()}, size{list.size()}, ptr{new T[capacity]}{
        //Copio gli elementi tra le parentesi graffe ({elem1, elem2,...}) e li inserisco nel vettore
        std::copy(list.begin(), list.end(), ptr);
    }
    
/* costruttore di copia */
//vedere assegnamento di copia
template<typename T>
MyVector<T>::MyVector(const MyVector<T>& v)
    : capacity{v.capacity}, size{v.size}, ptr{new T[v.size]}{
        std::copy(v.ptr, v.ptr+size, ptr);
    }

/* costruttore di spostamento */
//vedere assegnamento di spostamento
template<typename T> 
MyVector<T>::MyVector(MyVector<T>&& v) : capacity{v.capacity}, size{v.size}, ptr{v.ptr}{
        v.capacity = 0;
        v.size = 0;
        v.ptr = nullptr;
}  

/* assegnamento di spostamento */
template<typename T>
MyVector<T>& MyVector<T>::operator=(MyVector<T>&& v){
    //elimino i vecchi dati 
    delete[] ptr;
    //sposto il puntatore ai nuovi elmenti
    capacity = v.capacity;
    size = v.size;
    ptr = v.ptr;
    //porto a valore di default gli elementi di v
    v.capacity = 0;
    v.size = 0;
    v.ptr = nullptr;
    return *this;
}

/* assegnamento di copia */
template<typename T>
MyVector<T>& MyVector<T>::operator=(MyVector<T> v){
    //crea una copia dei dati di v
    T* p = new T[v.size];
    std::copy(v.ptr, v.ptr+v.size, p);
    //elimina gli elementi vecchi
    delete[] ptr;
    //il puntatore punta ai nuovi elementi
    capacity = v.capacity;
    size = v.size;
    ptr = p;
    return *this;
}

/* aggiungi un elemento in coda al vettore */
template<typename T>
void MyVector<T>::pushBack(const T& value){
    //effettuo un ridimensionamento della capacità se necessario
    //non aumento di troppo la capacità per evitare sprechi
    if(size == capacity) {reserve(capacity + 5);}
    ptr[size++] = value;
}

/* elimina l'elemento in coda al vettore */
template<typename T>
void MyVector<T>::popBack(){
    size--;
    //richiamo manualmente il distruttore perchè gli elementi del vettore
    //vengono creati tramite "new", se non lo facessi andrei a riempie il garbage
    //se ripeto più volte il pop degli elementi
    ptr[size].~T();
}

/* riservo una certa capacità ad un vettore */
template<typename T>
void MyVector<T>::reserve(unsigned int neededCapacity){
    //se la capacità del vettore è maggiore di quella
    //passata come argomento, non faccio nulla
    if(capacity >= neededCapacity) {throw std::invalid_argument ("Capacita' richiesta minore di quella attuale.");}
    if(ptr == nullptr){
        capacity = 0;
        size = 0;
    }
    T* pointer = new T[neededCapacity];
    std::copy(ptr, ptr+size, pointer);
    capacity = neededCapacity;
    delete[] ptr;
    ptr = pointer;
}

/* accesso con boundary check const e non-const*/
template<typename T>
T& MyVector<T>::at(unsigned int index){
    //se si richiede la lettura o l'assegnamento di un indice fuoriscala
    //lancia un errore
    if(index >= size) {throw std::invalid_argument("Indice inesistente!");}
    return ptr[index];
}

template<typename T>
const T& MyVector<T>::at(unsigned int index) const{
    //se si richiede la lettura o l'assegnamento di un indice fuoriscala
    //lancia un errore
    if(index >= size) {throw std::invalid_argument("Indice inesistente!");}
    return ptr[index];
}

/* stampa in output del vettore */
//Questa indentazione sembra essere tra le più leggibili
//vector: {elem1 elem2 elem3 ...}
template<typename T>
void MyVector<T>::printVector(){
    std::cout << "{ ";
    for (unsigned int i = 0; i < size; i++) {
        std::cout << ptr[i] << " "; 
    }
    std::cout << "}" <<std::endl;
}