#include "ListaSimplesmenteEncadeada.h"

// Construtor: Inicia o nó cabeça
// Complexidade Temporal: O(1)
ListaSimplesmenteEncadeada::ListaSimplesmenteEncadeada() {
    cabeca = new No;
    cabeca->proximo = nullptr;
}

// Destrutor: A memória alocada é liberada
// Complexidade Temporal: O(n)
ListaSimplesmenteEncadeada::~ListaSimplesmenteEncadeada() {
    No* atual = cabeca;
    while (atual != nullptr) {
        No* proximo = atual->proximo;
        delete atual;
        atual = proximo;
    }
}

// Complexidade Temporal: O(1)
void ListaSimplesmenteEncadeada::inserirNoInicio(int id) {
    No* novo = new No;
    novo->id = id;
    novo->proximo = cabeca->proximo;
    cabeca->proximo = novo;
}

// Complexidade Temporal: O(n) - Percorre até o último elemento da lista
void ListaSimplesmenteEncadeada::inserirNoFim(int id) {
    No* auxiliar = cabeca;
    while (auxiliar->proximo != nullptr) {
        auxiliar = auxiliar->proximo;
    }

    No* novo = new No;
    novo->id = id;
    novo->proximo = nullptr;
    auxiliar->proximo = novo;
}

// Complexidade Temporal: O(n) - Caso médio/pior caso é necessário percorrer n vezes até achar
bool ListaSimplesmenteEncadeada::buscarPeloId(int id) const {
    No* auxiliar = cabeca->proximo;
    while (auxiliar != nullptr && auxiliar->id != id) {
        auxiliar = auxiliar->proximo;
    }
    return (auxiliar != nullptr);
}

// Complexidade Temporal: O(n) - Procura o nó mantendo o ponteiro anterior
int ListaSimplesmenteEncadeada::removerPeloId(int id) {
    No* auxiliar = cabeca->proximo;
    No* anterior = cabeca;

    while (auxiliar != nullptr && auxiliar->id != id) {
        anterior = auxiliar;
        auxiliar = auxiliar->proximo;
    }

    if (auxiliar != nullptr) {
        anterior->proximo = auxiliar->proximo;
        delete auxiliar;
        return 1;
    }
    return 0; // ID não encontrado
}
