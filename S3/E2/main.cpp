#include <iostream>
#include "funciones.h"
using namespace std;
int main() {
    string frase= PedirFrase();
    int i=0, end=frase.length()-1;
    ImprimirResultados(frase, i, end);

}
