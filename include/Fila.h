#ifndef FILA_H
#define FILA_H

struct no{
    no* esq;
    int chave;
    no* dir;
};

class Fila
{
    public:
        Fila();
        virtual ~Fila();
        bool pertence(int n);
        void inserir(int n);
        void imprime();

    private:
        no* fim_;
};

#endif // FILA_H
