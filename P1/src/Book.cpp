#include "Book.h"

//Muitos constructors
Book::Book(int _id,string _tt, string _autor):Elemento(_id),tittle(_tt),autor(_autor){};
Book::Book(string _tt,string _autor):Book(0,_tt,_autor){};
Book::Book(int _id,string _tt):Book(_id,_tt,"Desconhecido"){};
Book::Book(string _tt):Book(0,_tt,"Descohecido"){};
Book::Book(int _id):Book(_id,"Sem nome","Desconhecido"){};
Book::Book():Book(0,"Sem nome","Desconhecido"){};

void Book::imprimirInfo() const{
    cout << tittle << " - " << autor << " - " << getID() << endl;
};

Book::~Book()
{
    cout << " > Livro Retirado\n";
    //dtor
}
