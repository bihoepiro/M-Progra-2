#include <iostream>
#include "funciones.h"
using namespace std;
int main() {
    int num, antPrimo, sigPrimo;
    PedirNumero(num);
    misPrimos(antPrimo, sigPrimo, num);
    cout << "Numero primo siguiente: " << sigPrimo<<endl;
    cout << "Numero primo anterior: " << antPrimo<<endl;
}
