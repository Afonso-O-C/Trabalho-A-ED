#include<iostream>
#include"no_generic.h"

using namespace std;

void setOption(int* op); //Repetuir algumas estruturas, então defini essa função generica

//Aqui será o arquivo main principal, nossa ideia geral é criar e separar
int main(){
	//Ideia, criar um grande programa com várias opções de listas para testarmos:
	int option; //Esse vai definir a opção que vamos seguir
	int value; //Servirá no futuro para colher dados de adiçãoi, remoção e busca
	
	do{//Grande laço de repetição superior, ele da as opções de menu que iremos seguir
		cout << "\tMENU\n1. LSE(Lista Simples Encadeada)\n2. LDE(Lista Duplamente Encadeada)\n3. LDEC(Circular)\n4. Árvores de Busca Binária\n5. Grafos\n";
		setOption(&option);
		
	}while(option!=0);
	
	
	
	
	int novo;
	no_generic teste;
	
	cout << "New value: " << endl;
	cin >> novo;
	
	teste.setKey(novo);
	
	cout << endl;
	teste.getkey();
	
	return 0;
}

void setOption(int* op){
	cout << " Insira valor: ";
	cin >> *op;
}
