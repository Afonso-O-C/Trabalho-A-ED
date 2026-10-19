#ifndef LISTAORD_H
#define LISTAORD_H

#include<Elemento.h>
#include<Fila.h>

class ListaOrd
{
    private:
        lista_no<Fila> filas;

    public:
        //Constructors e Destructor
        ListaNOrd(int _tam);
        ListaOrd();
        ~ListaOrd();

        //Busca binária
        int buscaBiAux(int ini,int fin,int id) const;
        int buscaBi(Fila alvo) const;

        //Adição
        void addID(Fila nuevo);


};

#endif // LISTAORD_H
