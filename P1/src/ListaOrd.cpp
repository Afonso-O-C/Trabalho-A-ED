#include "ListaOrd.h"

ListaOrd::ListaOrd(int _tam){
    filas.setLimit(_tam);
    cout << " > Lista Ordenada criada\n";
}
ListaOrd::ListaOrd():ListaOrd(10){}

ListaOrd::~ListaOrd()
{
    cout << " > Lista Ordenada destruída\n";
    //dtor
}

int ListaOrd::buscaBiAux(int ini,int fin,int id) const{
    if(ini>=fin){
        if((filas.get(fin)!=id)||(filas.get(ini)!=id)){
            cout << " Erro > Valor não encontrado\n";
            return fin;
        }
        else{
            cout << " > Valor encontrado\n";
            return ini;
        }
    }
    else{
        int med=(ini+fin)/2;
        if(filas.get(med)<id){
            return buscaBiAux(med,fin,id);
        }
        else if(filas.get(med)>id){
            return buscaBiAux(ini,med,id);
        }
        else{
            cout << " > Valor encontrado\n";
            return med;
        }
    }
};

int ListaOrd::buscaBi(Fila alvo) const{
    int idAlvo=alvo.getID();
    int endL=filas.getTam();
    int iniL=0;
    return buscaBiAux(iniL,endL,idAlvo);
}

void ListaOrd::addID(Fila nuevo){
    int locate=buscaBi(nuevo);
    if(filas.get(locate)==nuevo.getID()){
        cout << " Erro > Valor já existente\n";
        return;
    }
    //Ainda vou escrever
}

