#ifndef FILA_H
#define FILA_H

#include <Book.h>

//Praticamente copiando Pilha com outro nome, no final apenas alteramos as funções
class Fila : public Elemento
{
    private:
        lista_no<Book> fila;

    public:
        //Destructor e Constructor
        Fila(int _id,int tam);
        Fila(int _id);
        ~Fila();

        //Funções
        void enfileirar(Book nuevo);
        void desenfileirar();
        Book finalFila() const;
        bool cheia() const;
        bool vazio() const;

        //Funções especiais
        void imprimirInfo() const;
};

#endif // FILA_H
