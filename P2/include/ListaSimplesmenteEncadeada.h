#ifndef LISTASIMPLESMENTEENCADEADA_H
#define LISTASIMPLESMENTEENCADEADA_H


class ListaSimplesmenteEncadeada
{
    private:
        //Onde é feita a definição No encapsulado
        typedef struct No{
            int id;
            struct No* proximo;
        }No;

        // Definimos o ponteiro do nó cabeça
        No* cabeca;

    public:
        // Construtor e Destrutor
    ListaSimplesmenteEncadeada();
    ~ListaSimplesmenteEncadeada();

    // Métodos de manipulação
    void inserirNoInicio(int id);
    void inserirNoFim(int id);
    bool buscarPeloId(int id) const;
    int removerPeloId(int id);
    void imprimir() const;

    protected:

};

#endif // LISTASIMPLESMENTEENCADEADA_H
