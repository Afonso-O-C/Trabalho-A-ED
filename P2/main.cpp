#include <iostream>
#include <string>
#include "ListaSimplesmenteEncadeada.h"

using namespace std;

int main(){
    ListaSimplesmenteEncadeada Lista;
    int opcao = -1;
    int id;


    while(opcao != 0){
        cout << "Menu da Lista: " << endl;
        cout << "0 - Fechar o Menu " << endl;
        cout << "1 - Inserir no Inicio " << endl;
        cout << "2 - Inserir no Fim " << endl;
        cout << "3 - Buscar pelo ID " << endl;
        cout << "4 - Remover o ID " << endl;

        cin >> opcao;

        if (opcao == 0){
            cout << "Fechando" << endl;
        } else if(opcao == 1){
            cout << "Insira o ID" << endl;
            cin >> id;
            Lista.inserirNoInicio(id);
            cout << "Inserimos o ID: " << id << endl;
        } else if (opcao == 2){
            cout << "Insira o ID" << endl;
            cin >> id;
            Lista.inserirNoFim(id);
            cout << "Inserimos o ID: " << id << endl;
        } else if (opcao == 3){
            cout << "Insira o ID" << endl;
            cin >> id;
            if(Lista.buscarPeloId(id)){
                cout << "Encontramos o ID: " << id << endl;
            } else{
                cout << "ID nao encontrado " << endl;
            }
        } else if (opcao == 4){
            cout << "Insira o ID" << endl;
            cin >> id;
            if(Lista.removerPeloId(id) == 1){
                cout << "ID removido " << endl;
            } else{
                cout << "O ID nao foi encontrado. " << endl;
            }
        } else{
            cout << "Opcao Invalida. " << endl;
        }
    }
    return 0;
}
