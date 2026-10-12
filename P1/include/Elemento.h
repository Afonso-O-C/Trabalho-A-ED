#ifndef ELEMENTO_H
#define ELEMENTO_H

#include<iostream>

using namespace std;

class Elemento
{
    public:
        virtual void imprimirInfo() const =0;


        void getID() const;


        virtual ~Elemento();

    protected:

    private:
        int ID;
};

#endif // ELEMENTO_H
