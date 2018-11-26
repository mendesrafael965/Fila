#include <iostream>
#include "Fila.h"

using std::cout;
using std::endl;

int main()
{
    Fila f1,f2;
    for(int i = 5; i < 15; i++){
        f1.inserir(i);
    }

    for(int i = 5; i < 14; i++){
        f2.inserir(i);
    }
    if(f1==f2)
        cout << "Funciona" << endl;
    f1.inserir(3);
    f1.inserir(6);
    f1.remover(7);
    f1.imprime();
    cout << endl << f1.menor() << endl;

    return 0;
}
