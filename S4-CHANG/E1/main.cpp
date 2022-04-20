#include "funciones.h"

int main() {
    int *numero = nullptr;
    int *suma = nullptr;
    int n = pedir_numero();
    numero = &n;
    int s = hallar_suma(numero);
    suma = &s;
    cout << "La suma es: " << *suma << endl;
    delete numero;
    delete suma;
    numero = nullptr; suma = nullptr;
    return 0;
}
