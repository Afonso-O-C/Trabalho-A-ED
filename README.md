[README.md](https://github.com/user-attachments/files/33494783/README.md)



**Construção da Ideia Geral:** 

Criar um único programa que vai conter todas as listas, com um menu para escolher qual usar e um menu para escolher o que fazer com a lista.

Parte 1 - Listas Sequenciais

É preciso criar uma classe "pai" Elemento que gera as variações dos tipos de elementos das estruturas e cada estrutura deve ser uma classe que contém atributos de um dos filhos de Elementos.  

Ideia: Criar um sistema de biblioteca, listas ordenadas e não ordenadas podem representar estantes e mesas, essas terão elementos filas e pilhas que conterão dentro de si os elementos livros.

Elemento: Livros, Pilhas e Filas
Conteiners: Listas-O(Livros), Listas-NO(Livros), Pilhas(Livros) e Filas(Livros)

Parte 2 - Listas Encadeadas



**Analises durante a Programação:**

Na atividade, ele pede uma segunda proposta para filas, no caso acredito que a segunda proosta que ele indica é aquele com a utilização de dois ponteiros na lista sequencial, um que ficaria no começo da lista e outro que ficaria no final, isso iria alterar a complexidade, reduzindo-a para qualquer operação como O(1), mehlor caso. Talvez, seja interessante criar uma versão alternativa que o código se adaptou para ter essa fila. 

Angústia: Lembrei que da para criar uma função operato[] que poderia ser usado dentro de slon.h para facilitar pegar os valores, mas infelizmente esqueci disso e daria muito trabalho trocar tudo que usa .get() até o momento.

Bem que podria criar uma abstrata para pilha e fila, mas agora já era e elas tem Elemento já.



