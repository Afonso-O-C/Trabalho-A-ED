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
            cout << " Erro > Lista Cheia!\n";
        }
    };

    //Adicionar ao cmc
    void addi(T nuevo){
        if(tam<limit){
            //Aqui é um truque meio sujo, mas a ordem não importa e queremos a melhor complexidade
            T temp=values[0];
            values[0]=nuevo;
            if(tam>0){
                addf(temp);
            }
            else{
                tam++;
                cout << " > Valor Adicionado\n";
            }
        }
        else{
            cout << " Erro > Lista Cheia!\n";
        }
    }

    //Operação de busca abaixo
    /*int busca(T any){
        for(int i=0;i<tam;i++){
            if(values[i]==T){
                cout << " > Valor encontrado...\n";
                return i;
            }
        }
        cout << " Erro > Valor não encontrado\n";
        return -1;
    }//Lembrar de adicionar coperações de comparação em cada classe para isso aqui funcionar, nas classes elementos
*/
    //Getters apenas para teste:
    void get(int id){
        cout << values[id] << endl;
    }
};


#endif // SLON_H
