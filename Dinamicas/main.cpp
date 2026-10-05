#include<iostream>
#include"no_generic.h"

using namespace std;

//Aqui será o arquivo main principal, nossa ideia geral é criar e separar
int main(){
	int novo;
	no_generic teste;
	
	cout << "New value: " << endl;
	cin >> novo;
	
	teste.setKey(novo);
	
	cout << endl;
	teste.getkey();
	
	return 0;
}
