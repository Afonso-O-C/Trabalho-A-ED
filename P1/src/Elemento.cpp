#include "Elemento.h"

Elemento::Elemento(int _id){
    ID=_id;
    cout << " > Objeto criado\n";
}

int Elemento::getID() const{
    return ID;
}

void Elemento::setID(int nuevo){
    ID=nuevo;
}

Elemento::~Elemento()
{
    cout << " > Encerrando objeto.\n";
    //dtor
}
