#include "ListaOrd.h"

ListaOrd::ListaOrd(int _tam){
    tam=0;
    limit=_tam;
    values= new Book[limit];
    //filas.setLimit(_tam);
    cout << " > Lista Ordenada criada\n";
}
ListaOrd::ListaOrd():ListaOrd(10){}

ListaOrd::~ListaOrd()
{
    delete[] values;
    cout << " > Lista Ordenada destruída\n";
    //dtor
}

int ListaOrd::buscaBiAux(int ini,int fin,int id) const{
    if(ini>=fin){/*(filas.get(fin)!=id)||(filas.get(ini)!=id)*/
        if((values[ini].getID()!=id)||(values[fin].getID()!=id)){
            cout << " > Valor não encontrado\n";
            return fin;
        }
        else{
            cout << " > Valor encontrado\n";
            return ini;
        }
    }
    else{
        int med=(ini+fin)/2;
        if(values[med].getID()<id){
            return buscaBiAux(med,fin,id);
        }
        else if(values[med].getID()>id){
            return buscaBiAux(ini,med,id);
        }
        else{
            cout << " > Valor encontrado\n";
            return med;
        }
    }
};

int ListaOrd::buscaBi(Book alvo) const{
    int idAlvo=alvo.getID();
    int endL=tam;//filas.getTam();
    int iniL=0;
    return buscaBiAux(iniL,endL,idAlvo);
}

void ListaOrd::addID(Book nuevo){
    int locate=buscaBi(nuevo);
    if(values[locate]==nuevo){
        cout << " Erro > Valor já existente\n";
        return;
    }
    else{
        int id=locate;
        for(int i=tam;i>id;i--){
            values[i]=values[i-1];
        }
        values[id]=nuevo;
        tam++;
        cout << " > Valor adicionado\n";
    }
    //Ainda vou escrever
}

void ListaOrd::removeID(Book nuevo){
    int id=buscaBi(nuevo);
    if(!(values[id]==nuevo)){
        cout << " Erro > Valor no encontrado\n";
        return;
    }
    else{
        for(int i=id;i<tam;i++){
            values[i]=values[i+1];
        }
        tam--;
        cout << " > Valor removido\n";
    }

};


