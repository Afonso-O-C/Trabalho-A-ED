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
    pilha.addF(nuevo);
};

void Pilha::desempilha(){
    pilha.removeF();
};

Book Pilha::inTopo() const{
    Book temp=pilha[pilha.getTam()-1];
    temp.imprimirInfo();
    return temp;
};

bool Pilha::cheia() const{
    if(pilha.getTam()==pilha.getLimit()){
        cout << " > Pilha Cheia\n";
    }
    return pilha.getTam()==pilha.getLimit();
};

bool Pilha::vazia() const{
    if(!(cheia())){
        cout << " > Pilha Vazia\n";
    }
    return !(cheia());
};

void Pilha::imprimirInfo() const{
    if(vazia()){
        return;
    }
    for(int i=pilha.getTam()-1;i>=0;i--){
            pilha[i].imprimirInfo();
            cout << endl;
    }
}


