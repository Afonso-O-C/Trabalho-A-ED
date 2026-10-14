#ifndef SLON_H
#define SLON_H

#include<iostream>

using namespace std;

//Criando um template para lista não ordenadas
template<typename T>
class lista_no{

private:
    int tam;
    int limit;
    T* values;

public:
    //As funções são já escritas aqui por não ser possível separar(ao menos não facilmente)
    lista_no(){//Construção vazia, tipo 0
        this->tam=0;
        this->limit=10;
        this->values=new T[limit];
      cout << " > Lista Não Ordenada criada(Type 0)\n";
    };

    lista_no(int qtd){//Construção de tamanho certo, tipo 1
        this->tam=0;
        this->limit=qtd;
        this->values=new T[limit];
        cout << " > Lista Não Ordenada criada(Type 1)\n";
    };

    //Destructor destruidor de destruidores
    ~lista_no(){
        delete[] values;
        cout << " > Lista Não Ordenada destruída\n";
    };

    //Adicionando ao final
    void addf(T nuevo){
        if(tam<limit){
            values[tam]=nuevo;
            tam=tam+1;
            cout << " > Valor Adicionado\n";
        }
        else{
            cout << " > Lista Cheia!\n";
        }
    };

};


#endif // SLON_H
