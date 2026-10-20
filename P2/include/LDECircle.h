#ifndef LDECIRCLE_H
#define LDECIRCLE_H

#include <LDuplaEnd.h>

//Lista Duplamente Encadeada Circular

class LDECircle : public LDuplaEnd //Ela herda da outra para facilitar, assim ela já tem cabeça, addI, removeI, busca e removeId para reaproveitar
{
    public:
        LDECircle();
        ~LDECircle();

        //Adição e remoção, realizando uma sobrecarga
        void addF(int nuevo);
        void removeF();

};

#endif // LDECIRCLE_H
