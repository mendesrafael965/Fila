#include "Fila.h"

Fila::Fila(){
    fim_ = new no;
    fim_->esq = fim_;
    fim_->dir = fim_;
}

Fila::~Fila()
{
    //dtor
}
