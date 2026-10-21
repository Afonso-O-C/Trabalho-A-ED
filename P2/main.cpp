#include <iostream>
#include <string>
#include "ListaSimplesmenteEncadeada.h"
#include "LDECircle.h"
#include "LDuplaEnd.h"
#include "TrioDEC.h"

using namespace std;

// Mostra o conteudo de qualquer lista dupla (simples ou circular) usando so metodos publicos.
void mostrarLD(LDuplaEnd& lista){
    cout << "[";
    Nos* cab = lista.getHead();
    for(Nos* temp = cab->getNext(); temp != nullptr && temp != cab; temp = temp->getNext()){
        cout << temp->getKey();
        if(temp->getNext() != nullptr && temp->getNext() != cab) cout << " <-> ";
    }
    cout << "]" << endl;
} // O(n)

void menuLSE(){
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
        cout << "5 - Mostrar a lista" <<endl;

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
            } 
            else{
                cout << "O ID nao foi encontrado. " << endl;
            }
        } else if (opcao == 5){
            Lista.imprimir();
        } else{
            cout << "Opcao Invalida. " << endl;
        }
    }
}

template <class L> // Se adapta a LDE ou LDEC
void menuLD(L& lista, const string& nome){
    int opcao = -1;
    int id;
    Nos alvo;

    while(opcao != 0){
        cout << "\nMenu " << nome << ":" << endl;
        cout << "0 - Voltar" << endl;
        cout << "1 - Inserir no Inicio" << endl;
        cout << "2 - Inserir no Fim" << endl;
        cout << "3 - Remover do Inicio" << endl;
        cout << "4 - Remover do Fim" << endl;
        cout << "5 - Buscar pelo ID" << endl;
        cout << "6 - Remover pelo ID" << endl;
        cout << "7 - Mostrar a lista" << endl;
        cin >> opcao;

        if(opcao == 1){
            cout << "Insira o ID" << endl;
            cin >> id;
            lista.addI(id);
        } else if(opcao == 2){
            cout << "Insira o ID" << endl;
            cin >> id;
            lista.addF(id);
        } else if(opcao == 3){
            lista.removeI();
        } else if(opcao == 4){
            lista.removeF();
        } else if(opcao == 5){
            cout << "Insira o ID" << endl;
            cin >> id;
            alvo.setKey(id);
            lista.busca(&alvo);
        } else if(opcao == 6){
            cout << "Insira o ID" << endl;
            cin >> id;
            alvo.setKey(id);
            lista.removeID(&alvo);
        } else if(opcao == 7){
            mostrarLD(lista);
        } else if(opcao != 0){
            cout << "Opcao Invalida." << endl;
        }
    }
}

// Menu para Pilha e Fila
void menuTrio(ModelAbstrac& estrutura, const string& nome, const string& textoAdd, const string& textoRemove){
    int opcao = -1;
    int id;

    while(opcao != 0){
        cout << "\nMenu " << nome << ":" << endl;
        cout << "0 - Voltar" << endl;
        cout << "1 - " << textoAdd << endl;
        cout << "2 - " << textoRemove << endl;
        cout << "3 - Mostrar" << endl;
        cin >> opcao;

        if(opcao == 1){
            cout << "Insira o ID" << endl;
            cin >> id;
            estrutura.add(id);
        } else if(opcao == 2){
            estrutura.dda();
        } else if(opcao == 3){
            mostrarLD(estrutura.getBase());
        } else if(opcao != 0){
            cout << "Opcao Invalida." << endl;
        }
    }
}

int main(){
    int estrutura = -1;

    while(estrutura != 0){
        cout << "\nESCOLHA A ESTRUTURA" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Lista Simplesmente Encadeada" << endl;
        cout << "2 - Lista Duplamente Encadeada (LDE)" << endl;
        cout << "3 - Lista Duplamente Encadeada Circular (LDEC)" << endl;
        cout << "4 - Pilha" << endl;
        cout << "5 - Fila" << endl;
        cin >> estrutura;

        if(estrutura == 1){
            menuLSE();
        } else if(estrutura == 2){
            LDuplaEnd lde;
            menuLD(lde, "LDE");
        } else if(estrutura == 3){
            LDECircle ldec;
            menuLD(ldec, "LDEC");
        } else if(estrutura == 4){
            Pilha pilha;
            menuTrio(pilha, "Pilha", "Empilhar", "Desempilhar");
        } else if(estrutura == 5){
            Fila fila;
            menuTrio(fila, "Fila", "Enfileirar", "Desenfileirar");
        } else if(estrutura != 0){
            cout << "Opcao Invalida." << endl;
        }
    }
    return 0;
}
