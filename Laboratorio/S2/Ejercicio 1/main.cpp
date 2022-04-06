#include "funciones.h"

int main() {
    float suma, eliminado=21;
    IngresarDatos(suma, eliminado);
    float prom= CalcularPromedio(suma, eliminado);
    string condicion= Condicion(prom);
    PresentarDatos(prom, eliminado, condicion);
    return 0;
}
