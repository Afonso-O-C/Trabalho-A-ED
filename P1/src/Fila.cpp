#include "Fila.h"

Fila::Fila(int _id,int tam):Elemento(_id){
    fila.setLimit(tam);
    cout << " > Fila iniciada\n";
}

Fila::Fila(int _id):Fila(_id,10){}

Fila::~Fila()
{
    cout << " > Fila Encerrada\n";
    //dtor
}

void Fila::enfileirar(Book nuevo){
    fila.addf(nuevo);
}

void Fila::desenfileirar(){
    fila.removei();
};

Book Fila::finalFila() const{
    Book temp=fila.get(fila.getTam()-1);
    temp.imprimirInfo();
    return temp;
}

bool Fila::cheia() const{
    if(fila.getTam()==fila.getLimit()){
        cout << " > Fila cheia\n";
    }
    return fila.getTam()==fila.getLimit();
}

bool Fila::vazio() const{
    if(fila.getTam()==0){
        cout << " > Fila vazia\n";
    }
    return fila.getTam()==0;
}

void Fila::outFila() const{
    if(vazio()){
        return;
    }
    for(int i=0;i<fila.getTam();i++){
        fila.get(i).imprimirInfo();
        cout << "\t";
    }
    cout << endl;
}

