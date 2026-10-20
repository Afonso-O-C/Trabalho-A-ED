#include "ABB.h"

ABB::ABB()
{
    nosQtd=0;
    cout << " > ABB criada\n";
    //ctor
}

ABB::~ABB()
{
    //Uma obs: Não sei se os destructors estão desfazendo as coisas que as listas criam, eu espero que sim, pois não quero criar uma função de "demolir"
    cout << " > ABB eliminada\n";
    //dtor
}

Nos* ABB::busca(int alvo,Nos* paso) const{
    if((alvo<paso->getKey())&&(paso->getPrev()!=nullptr)){
        return busca(alvo,paso->getPrev());
    }
    else if((alvo>paso->getKey())&&(paso->getNext()!=nullptr)){
        return busca(alvo,paso->getNext());
    }
    else{
        return paso;
    }
};

void ABB::add(int nuevo){
    if(nosQtd<=0){
        //significa que não há valores, temos que usar a cab
        cab=new Nos;
        cab->setKey(nuevo);
        cout << " > Valor criado\n";
    }
    else{
            //Colocar aqui a busca, new com novo valor e etc
    }
};
