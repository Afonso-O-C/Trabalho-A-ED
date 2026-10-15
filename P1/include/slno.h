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
      cout << " > Lista criada(Type 0)\n";
    };

    lista_no(int qtd){//Construção de tamanho certo, tipo 1
        this->tam=0;
        if(qtd!=0){
            this->limit=qtd;
        }
        else{
            this->limit=10;
        }
        this->values=new T[limit];
        cout << " > Lista criada(Type 1)\n";
    };

    //Destructor destruidor de destruidores
    ~lista_no(){
        delete[] values;
        cout << " > Lista destruída\n";
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
    void addfalsoi(T nuevo){
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

    //Adicionar ao cmc com deslocamento
    void addi(T nuevo){
        if(tam<limit){
            for(int i=tam;i>0;i--){
                values[i]=values[i-1];
            }
            values[0]=nuevo;
            tam++;
            cout << " > Valor Adicionado\n";
        }
        else{
            cout << " Erro > Lista Cheia!\n";
        }
    };

    //Getters:

    T get(int id) const{
        return values[id];
    };
    int getTam()const{
        return tam;
    };
    int getLimit()const{
        return limit;
    };

    //Setters:
    void set(int id, T nuevo){
        values[id]=nuevo;
    }
    void set(int nuevo){
        tam=nuevo;
    }
    void setLimit(int nuevo){//Aqui não posso usar fora da criação, se não perdemos muita coisa
        delete[] values;
        values=new T[nuevo];
        limit=nuevo;
    }

    //Remoções
    void removef(){
        if(tam>0){
            tam--;
            cout << " > Valor Removido\n";
        }
        else{
            cout << " Erro > Lista vazia\n";
        }
    }

    //Remoção já com deslocamento, não terá falsa remoção, triste
    void removei(){
        if(tam>0){
            for(int i=0;i<tam;i++){
                values[i]=values[i+1];
            }
            tam--;
            cout << " > Valor Removido\n";
        }
        else{
            cout << " Erro > Lista vazia\n";
        }
    }

    //Fim do nosso template, arma principal desse programa

};


#endif // SLON_H
