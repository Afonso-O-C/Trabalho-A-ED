#include<iostream>
#include"Book.h"
#include"slno.h"


using namespace std;

int main(){
    cout << "Hello World!" << endl;

    //Elemento teste;

    //teste.getID();
    int d=100;
    {
    Book livro(23,"Jão","Pedro");
    livro.imprimirInfo();
    Book livro2(24,"Jonas","Dona Bet");
    if(livro==livro2){
        cout << "\nFunciona\n";
    }
    }
    //lista_no<bool> testes2;


    return 0;

}
