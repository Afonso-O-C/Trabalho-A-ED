#include "LDuplaEnd.h"

LDuplaEnd::LDuplaEnd()
{
    cab = new Nos;
    cab->setKey(0);
    cout << " > LDE Iniciada\n";
    //ctor
} // O(1)

LDuplaEnd::~LDuplaEnd()
{
    Nos* temp = cab->getNext();
    while (temp != nullptr && temp != cab) {
        Nos* proximo = temp->getNext();
        delete temp;
        temp = proximo;
    }
    delete cab;
    cout << " > LDE Encerrada\n";
    //dtor
} // O(n)

Nos* LDuplaEnd::getHead() const{
    return cab;
}; // O(1)

Nos* LDuplaEnd::walkEnd(Nos* paso) const{
    if(paso->getNext()!=nullptr){
        return walkEnd(paso->getNext());
    }
    return paso;
}; // O(n)

Nos* LDuplaEnd::moonWalk(Nos* paso) const{
    if(paso->getPrev()!=nullptr){
        return moonWalk(paso->getPrev());
    }
    else{
        //L�gica, se a de tr�s de for NULL, estamos na cabe�a, logo:
        if(paso->getNext()!=nullptr){
            return paso->getNext();
        }
        else{
            cout << " Erro > Lista vazia\n";
            return cab;
        }
    }
}; // O(n)

Nos* LDuplaEnd::busca(Nos* alvo) const{
    for(Nos*temp = cab->getNext();temp != nullptr && temp != cab; temp = temp->getNext()){
        if(temp->getKey() == alvo->getKey()){
            cout << " Valor encontrado\n";
            return temp;
        }
    }
    cout << " Erro > Valor nao encontrado\n";
    return nullptr;
}; // O(n)

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
}; // O(1)

void LDuplaEnd::addF(int nuevo){
    Nos* reciente=new Nos;
    Nos* temp=walkEnd(cab);
    reciente->setKey(nuevo);
    reciente->setAnt(temp);
    //N�o preciso me preocupar em fazer ele apontar para o Null, pois na hora da cria��o ele j� aponta, mas por seguran�a...
    reciente->setNext(nullptr);
    temp->setNext(reciente);
    cout << " > Valor adicionado\n";
} // O(n)

void LDuplaEnd::removeI(){
    if(cab->getNext()==nullptr || cab->getNext()==cab){ // Segunda condicao faz uma checagem pra prevenir de erros com LDECircle
        cout << " Erro > Lista vazia\n";
        return;
    }
    Nos* temp=cab->getNext();
    if(temp->getNext()!=nullptr){
        temp->getNext()->setAnt(cab);
    }
    cab->setNext(temp->getNext());
    delete temp;
    temp=nullptr;
    cout << " > Valor eliminado\n";
}; // O(1)

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
}; // O(n)

void LDuplaEnd::removeID(Nos* alvo){
    Nos* temp=busca(alvo);
    if(temp == nullptr){
        cout << " Erro > Valor no encontrado\n";
        return;
    }
    else{
        if(temp->getNext()!=nullptr){
            temp->getNext()->setAnt(temp->getPrev());
        }
        temp->getPrev()->setNext(temp->getNext());
        delete temp;
        temp=nullptr;
        cout << " > Valor eliminado\n";
    }
}; // O(n)
