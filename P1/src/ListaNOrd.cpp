#include "ListaNOrd.h"

ListaNOrd::ListaNOrd(int _limit)
{
    tam=0;
    limit=_limit;
    values=new Book[limit];
    //pilhas.setLimit(_tam);
    cout << " > Lista Não Ordenada Criada\n";
}

ListaNOrd::ListaNOrd():ListaNOrd(10){}


ListaNOrd::~ListaNOrd()
{
    delete[] values;
    cout << " > Lista Não Ordenada Encerrada\n";
    //dtor
}

void ListaNOrd::addI(Book nuevo){
    if(tam>=limit){
        cout << " Erro > Lista cheia\n";
        return;
    }
    for(int i=tam;i>-1;i--){
        values[i]=values[i-1];
    }
    values[0]=nuevo;
    tam++;
    //pilhas.addi(nuevo);
};
void ListaNOrd::addF(Book nuevo){
    if(tam>=limit){
        cout << " Erro > Lista cheia\n";
        return;
    }
    values[tam]=nuevo;
    tam++;
    //pilhas.addf(nuevo);
};
void ListaNOrd::removeI(){
    if(tam<=0){
        cout << " Erro > Lista vazia\n";
        return;
    }
    for(int i=0;i<tam;i++){
        values[i]=values[i+1];
    }
    tam--;
    //pilhas.removei();
};
void ListaNOrd::removeF(){
    if(tam<=0){
        cout << " Erro >> Lista vazia\n";
        return;
    }
    tam--;
    //pilhas.removef();
};

int ListaNOrd::busca(Book alvo) const{
    //int Id_alvo=alvo.getID();
    for(int i=0;i<tam;i++){
        if(alvo==values[i]){
            cout << " > Busca conclusiva\n";
            return i;
        }
    }
    cout << " Erro > Objeto no encontrado\n";
    return -1;
};

void ListaNOrd::removeID(Book alvo){
    int id=busca(alvo);
    if(id>-1){
        //pilhas.set(id,pilhas.get(pilhas.getTam()-1));
        //pilhas.set(pilhas.getTam()-1);
        for(int i=id;i<tam;i++){
            values[i]=values[i+1];
        }
        tam--;
        cout << " > Valor Removido\n";
    }
};

void ListaNOrd::changeID(Book alvo, Book nuevo){
    int id=busca(alvo);
    if(id>-1){
        //pilhas.set(id,nuevo);
        values[id]=nuevo;
        cout << " > Alteração realizada\n";
    }
};

void ListaNOrd::setLimit(int _tam){
    limit=_tam;
    delete[] values;
    values=new Book[limit];
}

Book ListaNOrd::operator[](int id) const{
    return values[id];
}

int ListaNOrd::getTam() const{
    return tam;
};

int ListaNOrd::getLimit() const{
    return limit;
};

