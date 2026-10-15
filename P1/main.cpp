#include<iostream>
#include"Elemento.h"
#include"slno.h"

using namespace std;

int main(){
    cout << "Hello World!" << endl;

    //Elemento teste;

    //teste.getID();
    int d=100;
    {
    lista_no<int> teste(d);
    teste.addi(13);
    teste.addf(12);
    teste.addi(11);
    //teste.busca(12);
    cout << teste.get(0) << " " << teste.get(1) << " " << teste.get(2) << endl;
    teste.set(0,67);
    cout << teste.get(0) << " " << teste.get(1) << " " << teste.get(2) << endl;
    teste.removef();
    teste.addi(66);
    cout << teste.get(0) << " " << teste.get(1) << " " << teste.get(2) << endl;
    }
    //lista_no<bool> testes2;


    return 0;

}
