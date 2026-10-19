#ifndef LISTANORD_H
#define LISTANORD_H

#include<Elemento.h>
#include<Book.h>

class ListaNOrd
{
    private:
        int tam;
        int limit;
        Book* values;//Modificar depois para ser um dos filhos de "Elemento", se possível, embora creio que não seja
        //lista_no<Pilha> pilhas;

    public:
        //Constructores e Destructors base
        ListaNOrd(int _limit);
        ListaNOrd();
        ~ListaNOrd();

        //Adição e remoção simples
        void addI(Book nuevo);
        void addF(Book nuevo);
        void removeI();
        void removeF();

        //Agora as com busca de ID
        int busca(Book alvo) const;
        void removeID(Book alvo);
        void changeID(Book alvo, Book nuevo);

};

#endif // LISTANORD_H
