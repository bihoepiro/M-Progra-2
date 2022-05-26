#include <iostream>
#include "funciones.h"
#include <iostream>
using namespace std;

int main() {
    int dimension= PedirDatos();
    int ** matriz1 = nullptr;
    int ** matriz2 = nullptr;
    int ** matriz3 = nullptr;
    CrearMatriz(matriz1, dimension);
    CrearMatriz(matriz2, dimension);
    MatrizSuma(matriz3, matriz1, matriz2, dimension);
    cout << "Matriz 1";
    ImprimirMatriz(matriz1, dimension);
    cout << "Matriz 2";
    ImprimirMatriz(matriz2, dimension);
    cout << "Matriz Resultante";
    ImprimirMatriz(matriz3, dimension);

}
