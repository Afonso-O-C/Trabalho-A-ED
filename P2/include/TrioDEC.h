#ifndef TRIODEC_H
#define TRIODEC_H

#include<LDECircle.h>

//Explicando: Aqui optei por colocar pilhas, filas e deques(ainda não coloquei) em apenas um .h, eles todos tem uma função abstrata que
//Tem como atributo uma LDEC, ou seja, todas tem e todas usam.

class ModelAbstrac
{
    protected:
        LDECircle estrutura;
    public:
        virtual void add(int nuevo);
        virtual void dda(); //Remoção

        LDECircle getBase();
};

class Pilha:public ModelAbstrac
{
    public:
        void add(int nuevo) override;
        void dda() override;
};

class Fila:public ModelAbstrac
{
    public:
        void add(int nuevo) override;
        void dda() override;
};

#endif // TRIODEC_H
