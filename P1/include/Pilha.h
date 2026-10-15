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

        //Funções gerais
        void empilhe(Book nuevo);
        void desempilha();
        Book inTopo() const;
        bool cheia() const;
        bool vazia() const;

        //Funções especiais
        void outPilha() const;


};

#endif // PILHA_H
