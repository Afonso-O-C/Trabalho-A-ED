#include<iostream>
#include"Pilha.h"
#include"Fila.h"
#include"ListaOrd.h"

using namespace std;

void option(int* value){
    int temp;
    cout << "Esolha option: ";
    cin >> temp;
    *value=temp;
}


int main(){
    cout << "Hello World!" << endl;

    //Elemento teste;

    //teste.getID();
    //int d=100;
    {
    Book livro(23,"Jão","Pedro");
    livro.imprimirInfo();
    Book livro2(24,"Jonas","Dona Bet");
    if(livro==livro2){
        cout << "\nFunciona\n";
    }
    }
    //lista_no<bool> testes2;

    int op1=1;


    while(op1!=0){
        cout << "\tESCOLHA ESTRUTURA\n1. Lista no ordenada\n2. Lista ordenada\n3. Pilha\n4. Fila\n0. Sair\n";
        option(&op1);
    }


    return 0;

}
