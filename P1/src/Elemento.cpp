#include "Elemento.h"

void Elemento::getID() const{
    cout << this->ID;
}


Elemento::~Elemento()
{
    cout << " Encerrando objeto.\n";
    //dtor
}
