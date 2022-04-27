//ENUNCIADO
//Realice un programa que cree 2 matrices NxN con valores aleatorios entre 0 y 4
//y una tercera matriz que sea laa suma de estas dos matrices
//ejemplo:
//matriz 1           matriz 2           matriz 3
// 1 2 3 4           4 2 1 2            5 4 4 6
// 3 3 4 1           2 3 2 1            5 6 6 2
// 4 2 1 2           3 2 3 4            7 4 4 6
// 2 3 2 4           0 1 2 4            2 4 4 8

#include <iostream>
using namespace std;
#include "funciones.h"

int main() {
    int dimension= Pedir_Datos();
    int ** matriz1 = nullptr;
    int ** matriz2 = nullptr;
    int ** matriz3 = nullptr;
    CrearMatriz(matriz1, dimension);
    CrearMatriz(matriz2, dimension);
    CrearMatrizTercera(matriz3, matriz1, matriz2, dimension);
    cout << "Matriz 1";
    Imprimir_Matriz(matriz1, dimension);
    cout << "Matriz 2";
    Imprimir_Matriz(matriz2, dimension);
    cout << "Matriz Resultante";
    Imprimir_Matriz(matriz3, dimension);



}
