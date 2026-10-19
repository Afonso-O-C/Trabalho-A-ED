#ifndef LISTAORD_H
#define LISTAORD_H

#include<Elemento.h>
#include<Book.h>

class ListaOrd
{
    private:
        int tam;
        int limit;
        Book* values;
        //lista_no<Fila> filas;

    public:
        //Constructors e Destructor
        ListaOrd(int _tam);
        ListaOrd();
        ~ListaOrd();

        //Busca binária
        int buscaBiAux(int ini,int fin,int id) const;
        int buscaBi(Book alvo) const;

        //Adição
        void addID(Book nuevo);

        //Remoção
        void removeID(Book nuevo);


};

#endif // LISTAORD_H
