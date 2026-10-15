[README.md](https://github.com/user-attachments/files/33494783/README.md)
**Construção da Ideia Geral:** 

Criar um único programa que vai conter todas as listas, com um menu para escolher qual usar e um menu para escolher o que fazer com a lista.

Parte 1 - Listas Sequenciais

É preciso criar uma classe "pai" Elemento que gera as variações dos tipos de elementos das estruturas e cada estrutura deve ser uma classe que contém atributos de um dos filhos de Elementos.  

Ideia: Criar um sistema de biblioteca, listas ordenadas e não ordenadas podem representar estantes e mesas, essas terão elementos filas e pilhas que conterão dentro de si os elementos livros.

Elemento: Livros, Pilhas e Filas
Conteiners: Listas-O(Filas), Listas-NO(Pilhas), Pilhas(Livros) e Filas(Livros)

Criar template de listas não ordenadas e a partir dela criar todas as outras listas, mas com alterações e limitações, afinal eu não posso permitir que uma lista ordenada tenha uma função de adicionar ao começo ou ao final de maneira simples. Então preciso adicionar uma limitação, composição, se para todas as outras listas forem uma mera composição da base que é o meu template, posso adicionar um if interno na adição do valor de uma lista ordenada e de outras ferramentas, mas para determinar a remoção ou a fila, preciso alterar o que está lá atualmente (3f5ae16)

Assim, a busca ficaria específica para cada uma das classes e não no templete geral, mas para realizar a busca corretamente vou precisar de getters e setters para as adições.

Parte 2 - Listas Encadeadas


**Analises durante a Programação:**

Na atividade, ele pede uma segunda proposta para filas, no caso acredito que a segunda proosta que ele indica é aquele com a utilização de dois ponteiros na lista sequencial, um que ficaria no começo da lista e outro que ficaria no final, isso iria alterar a complexidade, reduzindo-a para qualquer operação como O(1), mehlor caso. Talvez, seja interessante criar uma versão alternativa que o código se adaptou para ter essa fila. 

Angústia: Lembrei que da para criar uma função operato[] que poderia ser usado dentro de slon.h para facilitar pegar os valores, mas infelizmente esqueci disso e daria muito trabalho trocar tudo que usa .get() até o momento.

