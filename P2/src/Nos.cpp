#include "Nos.h"

Nos::Nos()
{
    prox=nullptr;//Pesquisei, esse nullptr � o mesmo que NULL pelo que vi
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

int Nos::getKey(){
    return chave;
};

Nos* Nos::getNext(){
    return prox;
};

Nos* Nos::getPrev(){
    return ant;
};
