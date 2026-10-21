#ifndef ABB_H
#define ABB_H

#include<Nos.h>

//�rvore Bin�ria de Busca, vamos usar nos, imagine o prox como o "direita" e o ant como o "esquerda" da �rvore
//Aproveitar dessa forma a l�gica e tudo mais

class ABB
{
    private:
        int nosQtd;
        Nos* cab;

    public:
        ABB();
        ~ABB();

        //Busca
        Nos* busca(int alvo,Nos* paso) const;

        //Adi��o
        void add(int nuevo);

        //Remocao
        void remov(int alvo, Nos* paso);


};

#endif // ABB_H
