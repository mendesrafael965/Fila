#include <iostream>
#include "Fila.h"

using std::cout;
using std::endl;

int main()
{
    Fila f1;
    for(int i = 0; i < 10; i++){
        f1.inserir(i);
    }
    f1.inserir(9);
    f1.imprime();

    return 0;
}
