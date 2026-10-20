#include "LDuplaEnd.h"

LDuplaEnd::LDuplaEnd()
{
    cout << " > LDE Iniciada\n";
    //ctor
}

LDuplaEnd::~LDuplaEnd()
{
    //dtor
}

Nos* LDuplaEnd::getHead() const{
    return cab;
};

Nos* LDuplaEnd::walkEnd(Nos* paso) const{
    if(paso->getNext()!=nullptr){
        return walkEnd(paso->getNext());
    }
    return paso;
};

Nos* LDuplaEnd::moonWalk(Nos* paso) const{
    if(paso->getPrev()!=nullptr){
        return moonWalk(paso->getPrev());
    }
    else{
        //Lógica, se a de trás de for NULL, estamos na cabeça, logo:
        if(paso->getNext()!=nullptr){
            return paso->getNext();
        }
        else{
            cout << " Erro > Lista vazia\n";
            return cab;
        }
    }
};

Nos* LDuplaEnd::busca(Nos* alvo)const{
    Nos* temp=cab;
    while(temp->getKey()!=alvo->getKey()){
        if(temp->getNext()==nullptr){
            cout << " Erro > Valor não encontrado\n";
            return temp;
        }
        temp=temp->getNext();
    }
    cout << " Valor encontrado\n";
    return temp;
};

void LDuplaEnd::addI(int nuevo){
    Nos* reciente=new Nos;
    reciente->setKey(nuevo);
    reciente->setNext(cab->getNext());
    reciente->setAnt(cab);
    if(cab->getNext()!=nullptr){
        cab->getNext()->setAnt(reciente);
    }
    cab->setNext(reciente);
    cout << " > Valor adicionado\n";
};

void LDuplaEnd::addF(int nuevo){
    Nos* reciente=new Nos;
    Nos* temp=walkEnd(cab);
    reciente->setKey(nuevo);
    reciente->setAnt(temp);
    //Não preciso me preocupar em fazer ele apontar para o Null, pois na hora da criação ele já aponta, mas por segurança...
    reciente->setNext(temp->getPrev());
    temp->setNext(reciente);
    cout << " > Valor adicionado\n";
}

void LDuplaEnd::removeI(){
    if(cab->getNext()==nullptr){
        cout << " Erro > Lista vazia\n";
        return;
    }
    Nos* temp=cab->getNext();
    temp->getNext()->setAnt(cab);
    cab->setNext(temp->getNext());
    delete temp;
    temp=nullptr;
    cout << " > Valor eliminado\n";
};

void LDuplaEnd::removeF(){
    Nos* temp=walkEnd(cab);
    if(temp->getPrev()==nullptr){
        cout << " Erro > Lista vazia\n";
    }
    else{
        temp->getPrev()->setNext(nullptr);
        delete temp;
        temp=nullptr;
        cout << " > Valor eliminado\n";
    }

};


