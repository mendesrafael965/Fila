#include <iostream>
#include "Fila.h"

using std::cout;
using std::endl;

int main()
{
    Fila f1,f2;
    for(int i = 0; i < 10; i++){
        f1.inserir(i);
    }
    for(int i = 10; i < 20; i++){
        f2.inserir(i);
    }

    f2=f1;
    if(f1==f2)
        cout << "Funciona" << endl;

    f2.imprime();


    return 0;
}
