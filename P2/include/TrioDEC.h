#ifndef TRIODEC_H
#define TRIODEC_H

#include<LDECircle.h>

//Explicando: Aqui optei por colocar pilhas, filas e deques(ainda n�o coloquei) em apenas um .h, eles todos tem uma fun��o abstrata que
//Tem como atributo uma LDEC, ou seja, todas tem e todas usam.

class ModelAbstrac
{
    protected:
        LDECircle estrutura;
    public:
        virtual void add(int nuevo) = 0;
        virtual void dda() = 0; //Remo��o
        virtual ~ModelAbstrac() {}

        LDECircle& getBase();
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
