#ifndef ELEMENTO_H
#define ELEMENTO_H

#include<iostream>
#include<string>//Adicionada aqui por essa ligar com todas as outras, quase todas as outras

using namespace std;

class Elemento
{
    public:
        Elemento(int _id);

        virtual void imprimirInfo() const =0;

        int getID() const;

        void setID(int nuevo);

        bool operator==(const Elemento& outro) const;

        virtual ~Elemento();

    private:
        int ID;

};

#endif // ELEMENTO_H
