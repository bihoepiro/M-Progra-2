#include "funciones.h"
using namespace std;

//Enunciado
// Generador de matrices cuadradas simétricas
// Desarrolle un programa que permita realizar lo siguiente:
//• Ingresar el tamaño de una matriz cuadrada validando que sea mayor a 2.
//• Generar una matriz dinámica simétrica con valores aleatorios entre 1 y 100
//• Mostrar en pantalla la matriz generada
//• Liberar todo el espacio usado por la matriz.
// Características mínimas a considerar en el desarrollo del programa:
//• Uso de punteros para la generación de matrices dinámicas
//• Funciones para ingreso y validación de datos solicitados
//• Funciones para la creación, generación, presentación y liberación (delete) de
//matrices dinámicas.
//• Usted debe decidir si las funciones requieren el uso de parámetros por valor, por
//referencia o por puntero.


int main() {
    int dimension= PedirDimension();
    int **Matriz= nullptr;
    CrearMatriz(Matriz, dimension);
    cout << "Esta es la matriz resultante:" << endl;
    ImprimirMatriz(Matriz, dimension);

    //libero espacio
    LiberarMatriz(Matriz, dimension);
}
