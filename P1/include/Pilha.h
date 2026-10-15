#ifndef PILHA_H
#define PILHA_H

#include <Book.h>

class Pilha : public Elemento
{
    private:
        lista_no<Book> pilha;

    public:
        //Básico
        Pilha(int _tam, int _id);
        Pilha(int _id);
        ~Pilha();

        //Funções
        void empilhe(Book nuevo);
        void desempilha();
        Book inTopo();
        bool cheia();
        bool vazia();


};

#endif // PILHA_H
