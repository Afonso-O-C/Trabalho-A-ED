#ifndef LISTASIMPLESMENTEENCADEADA_H
#define LISTASIMPLESMENTEENCADEADA_H


class ListaSimplesmenteEncadeada
{
    private:
        //Aqui está é onde definimos a struct No Encapsulada
        typedef struct No{
            int id;
            struct No* proximo;
        }No;

        // Definimos o ponteiro do nó cabeça
        No* cabeca;

    public:
        //É necessário definir o construtor No cabeça para começar as operações das Listas Encadeadas
        ListaSimplesmenteEncadeada(){
            cabeca = new No;
            cabeca->proximo = NULL;
        }
        void inserirNoInicio(int id){
            No* novo = new No;
            novo->id = id;
            novo->proximo = cabeca->proximo;
            cabeca->proximo = novo;
        }

        void inserirNoFim(int id){
            No* auxiliar = cabeca;
            while(auxiliar->proximo != NULL){
                    auxiliar = auxiliar->proximo;
            }

            No* novo = new No;
            novo->id = id;
            novo->proximo = NULL;
            auxiliar->proximo = novo;
        }

        No* buscarPeloId(int id){
            No* auxiliar = cabeca->proximo;
            while (auxiliar != NULL && auxiliar->id != id){
                    auxiliar = auxiliar->proximo;
            }
            return auxiliar;
        }

        int removerPeloId(int id){
            No* auxiliar = cabeca->proximo;
            No* anterior = cabeca;
            while (auxiliar != NULL && auxiliar->id != id){
                    anterior = auxiliar;
                    auxiliar = auxiliar->proximo;
                }
            if (auxiliar != NULL){
                anterior->proximo = auxiliar->proximo;
                delete(auxiliar);
                return 1;
            }
        return 0;
        }

    protected:

};

#endif // LISTASIMPLESMENTEENCADEADA_H
