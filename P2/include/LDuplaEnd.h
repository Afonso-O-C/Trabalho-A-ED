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

        //Função de deslocamento pela lista(Não sei porque fiz elas)
        Nos* walkEnd(Nos* paso) const;
        Nos* moonWalk(Nos* paso) const;

        //Função de busca
        Nos* busca(Nos* alvo)const;

        //Adição
        void addI(int nuevo);
        void addF(int nuevo);

        //Remoção
        void removeI();
        void removeF();
        void removeID(Nos* alvo);

};

#endif // LDUPLAEND_H
