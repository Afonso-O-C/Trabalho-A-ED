#ifndef NOS_H
#define NOS_H

#include<iostream>

using namespace std;

//Classe abstrata de elemento, vamos usar para criar todos os outros tipos de nos
class Nos
{
    private:
        int chave;
        Nos* prox;
        Nos* ant;

    public:
        //O básico
        Nos();
        ~Nos();

        //Setters e Getters
        void setKey(int nuevo);
        void setNext(Nos* nuevo);
        void setAnt(Nos* nuevo);

        int getKey();
        Nos* getNext();
        Nos* getPrev();

};

#endif // NOS_H
