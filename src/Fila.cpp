#include "Fila.h"
#include <iostream>

using std::cout;
using std::endl;

Fila::Fila(){
    fim_ = new no;
    fim_->esq = fim_;
    fim_->dir = fim_;
}

Fila::~Fila()
{
    delete [] fim_;
}

bool Fila::pertence(int n){
    no* i = fim_->dir;
    while(i != fim_ && i->chave != n){
        i = i->dir;
    }
    if(i == fim_){
        return false;
    }
    return true;
}

void Fila::inserir(int n){
    if(!pertence(n)){
        no* in = new no;
        in->chave = n;
        in->esq = fim_;
        in->dir = fim_->dir;
        fim_->dir = in;
        in->dir->esq = in;
    }
}

void Fila::imprime(){
    no* i;
    for(i = fim_->dir; i != fim_; i = i->dir){
        cout << i->chave << endl;
    }
}
