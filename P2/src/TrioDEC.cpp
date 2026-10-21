#include<TrioDEC.h>

LDECircle& ModelAbstrac::getBase(){
    return estrutura;
}

void Pilha::add(int nuevo){
    getBase().addF(nuevo);
}

void Pilha::dda(){
    getBase().removeF();
}

void Fila::add(int nuevo){
    getBase().addF(nuevo);
}

void Fila::dda(){
    getBase().removeI();
}
