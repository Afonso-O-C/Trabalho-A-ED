#ifndef ABB_H
#define ABB_H

#include<Nos.h>

//Árvore Binária de Busca, vamos usar nos, imagine o prox como o "direita" e o ant como o "esquerda" da árvore
//Aproveitar dessa forma a lógica e tudo mais

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

        //Adição
        void add(int nuevo);


};

#endif // ABB_H
