#ifndef LDUPLAEND_H
#define LDUPLAEND_H

#include<Nos.h>

//Lista duplamente encadeada, LDE para os mais intimos
class LDuplaEnd
{
    private:
        Nos* cab;

    public:
        LDuplaEnd();
        ~LDuplaEnd();

        //Getters
        Nos* getHead() const;

        //Fun��o de deslocamento pela lista(N�o sei porque fiz elas)
        Nos* walkEnd(Nos* paso) const;
        Nos* moonWalk(Nos* paso) const;

        //Fun��o de busca
        Nos* busca(Nos* alvo)const;

        //Adi��o
        void addI(int nuevo);
        void addF(int nuevo);

        //Remo��o
        void removeI();
        void removeF();
        void removeID(Nos* alvo);

};

#endif // LDUPLAEND_H
