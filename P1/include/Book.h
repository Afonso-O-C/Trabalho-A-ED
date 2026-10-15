#ifndef BOOK_H
#define BOOK_H

#include <Elemento.h>


class Book : public Elemento
{
    private:
        string tittle;
        string autor;
        //Apenas escrevendo uma ideia aqui:
        //Sería legal adicionar um ponteiro ou algo do tipo para o documento do livro, ou capa ou qualquer coisa que realmente fosse levar o lirvo a ser real
        //Escolhi a ideia de ser uma biblioteca para deixar isso sendo um trabalho mais funcional mesmo e que se possível, com algumas alterações possa ser usado na prática

    public:
        //Diversos Constructors de segurança, talvez um exagero :)
        Book(int _id,string _tt, string _autor);
        Book(string _tt,string _autor);
        Book(int _id,string _tt);
        Book(string _tt);
        Book(int _id);
        Book();

        //Override
        void imprimirInfo() const;

        ~Book();

};

#endif // BOOK_H
