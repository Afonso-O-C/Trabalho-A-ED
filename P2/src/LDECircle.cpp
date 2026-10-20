#include "LDECircle.h"

LDECircle::LDECircle()
{
    getHead()->setNext(getHead());
    getHead()->setAnt(getHead());
    cout << " > LDEC iniciada\n";
    //ctor
}

LDECircle::~LDECircle()
{
    cout << " > lDEC encerrada\n";
    //dtor
}

void LDECircle::addF(int nuevo){
    Nos* reciente=new Nos;
    reciente->setKey(nuevo);
    reciente->setNext(getHead());
    reciente->setAnt(getHead()->getPrev());
    getHead()->getPrev()->setNext(reciente);
    getHead()->setAnt(reciente);
    cout << " > Valor adicionado\n";
};

void LDECircle::removeF(){
    if(getHead()->getPrev()==getHead()){
        cout << " Erro > Lista vazia\n";
        return;
    }
    else{
        Nos* temp=getHead()->getPrev();
        temp->getNext()->setAnt(temp->getPrev());
        temp->getPrev()->setNext(temp->getNext());
        delete temp;
        temp=nullptr;
        cout << " > Valor eliminado\n";
    }
};
