#include "Link.h"
#include <iostream>

int main(){
    
    Link* deiNorreni = nullptr;
    
    Link thor = Link("Thor");
    deiNorreni = &thor;
    std::cout << std::endl <<"Inizio di una lista con Thor: ";
    deiNorreni->printAll();
    
    std::cout<<std::endl<<"\nAggiungo Odino con insert(): ";
    Link odino = Link("Odino");
    thor.insert(&odino);
    deiNorreni = &thor;
    deiNorreni->printAll();
    
    std::cout<<std::endl<<"\nAggiungo Loki con add(): ";
    Link loki = Link("Loki");
    odino.add(&loki);
    deiNorreni->printAll();
    
    std::cout<<std::endl<<"\nElimino Loki con erase(): ";
    loki.erase();
    deiNorreni->printAll();
    
    std::cout<<std::endl<<"\nAggiungo piu' elementi con add(): ";
    Link freyr = Link("Freyr");
    odino.add(&freyr);
    Link fenrir = Link("Fenrir");
    freyr.add(&fenrir);
    deiNorreni->printAll();
    
    std::cout<<std::endl<<"\nAggiungo Huginn in coda con pushBack(): ";
    Link* huginn = deiNorreni->pushBack("Huginn");
    deiNorreni->printAll();
    
    //elimino e distruggo Huginn (Evito problemi col garbage)
    huginn->erase();
    delete huginn;
    huginn = nullptr;
    
    std::cout<<std::endl<<"\nAggiungo Muninn in testa con pushFront(): ";
    Link* muninn = deiNorreni->pushFront("Muninn");
    deiNorreni->printAll();
    
    //elimino e distruggo Muninn (Evito problemi col garbage)
    muninn->erase();
    delete muninn;
    muninn = nullptr;
    
    std::cout<<std::endl<<"\nLista aggiornata: ";
    deiNorreni->printAll();
    
    std::cout << std::endl << "\nStampo gli elementi successivi a Odino con advance()"<<std::endl;
    std::cout << odino.advance(1) << std::endl;
    std::cout << odino.advance(2) << std::endl;
    std::cout << odino.advance(3) << std::endl;
    
    std::cout << std::endl << "\nE se stampo gli elementi successivi a Thor con advance()?"<<std::endl;
    std::cout << thor.advance(1) << std::endl;
    std::cout << thor.advance(2) << std::endl;
    std::cout << thor.advance(3) << std::endl;
    return 0;
}