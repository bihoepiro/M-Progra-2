using namespace std;
#include "funciones.h"
int main() {
    float a, l, p, exc, recu, total;
    IngresarDatos(a, l, p);
    Calculo(exc, recu, total, a, l, p);
    Presentar(exc, recu, total);
    return 0;
}