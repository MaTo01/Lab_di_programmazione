#include "Link.h"
#include <iostream>

Link* Link::insert(Link* n){
    if(n == nullptr) {return this;}
    n->succ = this;
    if(this->prev) this->prev->succ = n;
    n->prev = this->prev;
    this->prev = n;
    return n;
}

Link* Link::add(Link* n){
    if(n == nullptr) {return this;}
    n->prev = this;
    if(this->succ) this->succ->prev = n;
    n->succ = this->succ;
    this->succ = n;
    return n;
}

Link* Link::erase(){
    if(this->prev) this->prev->succ = this->succ;
    if(this->succ) this->succ->prev = this->prev;
    return this;
}

Link* Link::find(const std::string& s){
    Link* n = this;
    while(n->prev){
        if(n->value == s) {return n;}
    }
    
    n = this;
    while(n->succ){
        if(n->value == s) {return n;}
    }
    
    return nullptr;
}


std::string Link::advance(int n){
    Link* elem = this;
    if(n > 0){
        while (n--){
            if(!elem->succ) {return "Nessun elemento";}
            elem = elem->succ;
        }
    }else if(n < 0){
        while(n++){
            if(!elem->prev) {return "Nessun elemento";}
            elem = elem->prev;
        }
    }
    return elem->value;
}

Link* Link::pushBack(std::string s){
    Link* n = this;
    while(n->succ){
        n = n->succ;
    }
    
    Link* adding = new Link(s);
    n->add(adding);
    return adding;
}

Link* Link::pushFront(std::string s){
    Link* n = this;
    while(n->prev){
        n = n->prev;
    }
    
    Link* adding = new Link(s);
    n->insert(adding);
    return adding;
}


std::string Link::popBack(){
    Link* n = this;
    while(n->succ){
        n = n->succ;
    }
    n->prev->succ = nullptr;
    return n->value;
}

std::string Link::popFront(){
    Link* n = this;
    while(n->prev){
        n = n->prev;
    }
    n->succ->prev = nullptr;
    return n->value;
}


void Link::printAll() {
  // cerco il nodo iniziale
    Link* n = this;
    while (n->prev){
        n = n->prev;
    }
    
    std::cout << "{";
    while(n) {
        std::cout << n->value;
        if (!n->succ) {
            std::cout << "}" << std::endl;
            return;
        }
        std::cout << " ";
        n = n->succ;
    }
    std::cout << "}" << std::endl;
}



