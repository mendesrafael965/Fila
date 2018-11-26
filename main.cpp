#include <iostream>
#include "Fila.h"

using std::cout;
using std::endl;

int main()
{
    Fila f1;
    for(int i = 5; i < 15; i++){
        f1.inserir(i);
    }
    f1.inserir(3);
    f1.imprime();

    return 0;
}
