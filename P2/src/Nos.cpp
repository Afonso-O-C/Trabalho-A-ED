#include "Nos.h"

Nos::Nos()
{
    prox=nullptr;//Pesquisei, esse nullptr é o mesmo que NULL pelo que vi
    ant=nullptr;
    //ctor
}

Nos::~Nos()
{
    //dtor
}

void Nos::setKey(int nuevo){
    chave=nuevo;
};

void Nos::setNext(Nos* nuevo){
    prox=nuevo;
}

void Nos::setAnt(Nos* nuevo){
    ant=nuevo;
};

int Nos::getKey() const{
    return chave;
};

Nos* Nos::getNext() const{
    return prox;
};

Nos* Nos::getPrev() const{
    return ant;
};

