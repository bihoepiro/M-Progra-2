//ENUNCIADO
//Desarrolle un programa que permite leer como dato el orden de una matriz y el programa
//realice los siguiente:
//• Crear dos matrices: m1 y m2 con valores aleatorios cuyo rango esta entre 0 y 1
//• Imprimir ambas matrices
//• Crear e imprimir una tercera matriz del mismo orden que las anteriores y en cuyas
//celdillas se coloque 1 si los valores correspondientes a la misma posici ́on en m1 y
//en m2 son diferentes y 0 si son iguales, es decir:
//0 0 -> 0
//0 1 -> 1
//1 0 ->1
//1 1 -> 0
//• Ver los ejemplos
//• Para asignar el puntaje a esta pregunta es necesario que se trabaje con
//matrices din ́amicas, y que se realice un uso adecuado de la memoria
//• No olvide liberar la memoria antes de terminar el programa.


#include "funciones.h"
using namespace std;

int main() {
    int filas=0, columnas=0;
    char **matriz1= nullptr;
    char **matriz2= nullptr;
    char **matrizr= nullptr;
    Pedir_Datos(filas, columnas);
    CrearMatriz(matriz1, filas,columnas);
    CrearMatriz(matriz2, filas, columnas);
    CrearMatrizNueva(matriz2, matrizr, matriz1, filas, columnas);
    Imprimir_Matriz(matriz1, filas, columnas, "1");
    Imprimir_Matriz(matriz2, filas, columnas, "2");
    Imprimir_Matriz(matrizr, filas, columnas, "Resultante:");

    // liberacion de memoria
    for(int f=0; f<filas; f++)
        delete  [] matriz1[f];
    delete []matriz1;

    matriz1 = nullptr;

    for(int f=0; f<filas; f++)
        delete  [] matriz2[f];
    delete []matriz2;

    matriz2 = nullptr;

    for(int f=0; f<filas; f++)
        delete  [] matrizr[f];
    delete []matrizr;

    matrizr = nullptr;
}
