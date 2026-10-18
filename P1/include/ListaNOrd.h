#ifndef LISTANORD_H
#define LISTANORD_H

#include<Elemento.h>
#include<Pilha.h>

class ListaNOrd
{
    private:
        lista_no<Pilha> pilhas;

    public:
        //Constructores e Destructors base
        ListaNOrd(int _tam);
        ListaNOrd();
        ~ListaNOrd();

        //Adição e remoção simples
        void addI(Pilha nuevo);
        void addF(Pilha nuevo);
        void removeI();
        void removeF();

        //Agora as com busca de ID
        int busca(Pilha alvo) const;
        void removeID(Pilha alvo);
        void changeID(Pilha alvo, Pilha nuevo);

};

#endif // LISTANORD_H
