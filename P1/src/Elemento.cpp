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

bool Elemento::operator==(const Elemento& outro) const{
    return getID()==outro.getID();
}

Elemento::~Elemento()
{
    cout << " > Encerrando objeto.\n";
    //dtor
}
