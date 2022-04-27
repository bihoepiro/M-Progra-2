//ENUNCIADO
// Suponga que una imagen monocromatica es representada por B y W en una
//matriz de tama ̃no N x M donde N es el n ́umero de filas y M el n ́umero de columnas.
//Desarrollar un programa que permita generar la negativa de la imagen, convirtiendo los
//Bs en Ws y viceversa. El programa solicitar ́a la cantidad de Filas y Columnas y generara
//un arreglo aleatorio de Bs y Ws. Mostrara la imagen original representada por Bs y Ws
//y Mostrara la imagen negativa.

#include "funciones.h"
using namespace std;

int main()
{
    int filas=0, columnas=0;
    Pedir_Datos(filas, columnas);
    char ** matriz = nullptr;
    CrearMatriz(matriz, filas, columnas);
    char ** matrizn= nullptr;
    CrearMatrizNegativa(matriz, matrizn, filas, columnas);
    cout << "Matriz Original";
    Imprimir_Matriz(matriz, filas, columnas);
    cout << "Matriz Negativa";
    Imprimir_Matriz(matrizn, filas, columnas);



    return 0;

}

