#include "ListaNOrd.h"

ListaNOrd::ListaNOrd(int _tam)
{
    pilhas.setLimit(_tam);
    cout << " > Lista Não Ordenada Criada\n";
}

ListaNOrd::ListaNOrd():ListaNOrd(10){}


ListaNOrd::~ListaNOrd()
{
    cout << " > Lista Não Ordenada Encerrada\n";
    //dtor
}

void ListaNOrd::addI(Pilha nuevo){
    pilhas.addi(nuevo);
};
void ListaNOrd::addF(Pilha nuevo){
    pilhas.addf(nuevo);
};
void ListaNOrd::removeI(){
    pilhas.removei();
};
void ListaNOrd::removeF(){
    pilhas.removef();
};

int ListaNOrd::busca(Pilha alvo) const{
    int Id_alvo=alvo.getID();
    for(int i=0;i<pilhas.getTam();i++){
        if(Id_alvo==pilhas.get(i).getID()){
            cout << " > Busco conclusiva\n";
            return i;
        }
    }
    cout << " Erro > Objeto não encontrado\n";
    return -1;
};

void ListaNOrd::removeID(Pilha alvo){
    int id=busca(alvo);
    if(id>-1){
        pilhas.set(id,pilhas.get(pilhas.getTam()-1));
        pilhas.set(pilhas.getTam()-1);
        cout << " > Valor Removido\n";
    }
};

void ListaNOrd::changeID(Pilha alvo, Pilha nuevo){
    int id=busca(alvo);
    if(id>-1){
        pilhas.set(id,nuevo);
        cout << " > Alteração realizada\n";
    }
};
