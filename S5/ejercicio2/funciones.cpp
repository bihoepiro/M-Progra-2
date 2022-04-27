//
// Created by Bihonda Epiquien  on 2/11/21.
//
#include "funciones.h"
using namespace std;

void Pedir_Datos(int &filas, int &columnas) {
    int f=0, c=0;
    cout << "Ingrese el numero de filas:"<<endl;
    cin >>f;
    cout << "Ingrese el numero de columnas:"<<endl;
    cin >>c;
    filas = f;
    columnas= c;
}

void CrearMatriz(char **&pM, int filas, int columnas) {
    random_device rd;
    uniform_int_distribution<int> dis(1, 100);

    pM = new   char*[filas];
    for(int f=0; f<filas; f++)
        pM[f] = new char[columnas];

    for(int f=0; f<filas; f++){
        for(int c=0; c<columnas; c++)
            if (dis(rd) <= 50){
                pM[f][c] = 'B';
            }
            else{
            pM[f][c] = 'W';
        }
    }
}

void CrearMatrizNegativa(char **matriz, char  ** &matrizn, int filas, int columnas) {
    matrizn = new   char*[filas];
    for(int f=0; f<filas; f++)
        matrizn[f] = new char[columnas];

    for(int f=0; f<filas; f++){
        for(int c=0; c<columnas; c++)
            if (matriz[f][c] == 'B'){
                matrizn[f][c] = 'W';
            }
            else{
            matrizn[f][c] = 'B';
        }
    }
}

void Imprimir_Matriz(char **matriz, int filas, int columnas) {
    cout <<"\n";
    for(int cfilas =0; cfilas<filas; cfilas++)
    {
        for(int ccol =0; ccol<columnas; ccol++)
            cout << setw(5) << matriz[cfilas][ccol];
        cout << "\n";
    }
}


