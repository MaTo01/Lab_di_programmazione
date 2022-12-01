#ifndef LINK_H
#define LINK_H

#include <iostream>

class Link{
public:
    std::string value;
    
    Link(const std::string& v, Link* p = nullptr, Link* s = nullptr)
        : value{v}, prev{p}, succ{s} {}
    
    /* inserisce prima di un elemento */
    Link* insert(Link* n);
    /* iserisce dopo un elemento */ 
    Link* add(Link* n);
    /* rimuove un elemento */
    Link* erase();
    /* trova un link con un certo valore */ 
    Link* find(const std::string& s);
    /* trova l'n-esimo successivo */
    std::string advance(int n);
    /* stampa la lista */
    void printAll();
    
    Link* pushBack(std::string s);
    Link* pushFront(std::string s);
    
    std::string popBack();
    std::string popFront();
    
private:
    Link* prev;
    Link* succ;
    
};

#endif