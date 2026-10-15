#include "Pilha.h"

Pilha::Pilha(int _tam,int _id):Elemento(_id){
    pilha.setLimit(_tam);
    cout << " > Pilha iniciada\n";
}

Pilha::Pilha(int _id):Pilha(10,_id){};

Pilha::~Pilha()
{
    cout << " > Pilha encerrada\n";
    //dtor
}

void Pilha::empilhe(Book nuevo){
    pilha.addf(nuevo);
};

void Pilha::desempilha(){
    pilha.removef();
};

Book Pilha::inTopo(){
    Book temp=pilha.get(pilha.getLimit()-1);
    temp.imprimirInfo();
    return temp;
};

bool Pilha::cheia(){
    if(pilha.getTam()==pilha.getLimit()){
        cout << " > Pilha Cheia\n";
    }
    return pilha.getTam()==pilha.getLimit();
};

bool Pilha::vazia(){
    if(pilha.getTam()==0){
        cout << " > Pilha Vazia\n";
    }
    return pilha.getTam()==0;
};

