//
// Created by Bihonda Epiquien  on 9/11/21.
//

#ifndef EJERCICIO7_FUNCIONES_H
#define EJERCICIO7_FUNCIONES_H
#include "string"
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;
void Pedir_Datos(int &filas, int &columnas);
void CrearMatriz(char **&pM, int filas, int columnas);
void CrearMatrizNueva(char **matriz, char **&matrizn, char **matriz2, int filas, int columnas);
void Imprimir_Matriz(char **matriz, int filas, int columnas, string mensaje);
#endif //EJERCICIO7_FUNCIONES_H
