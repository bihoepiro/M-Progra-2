//
// Created by Bihonda Epiquien  on 8/11/21.
//

#include <iostream>
#include <iomanip>
#include "funciones.h"
using namespace std;

int Pedir_Datos() {
    int dimension=0;
    cout << "Ingrese la dimension de la matriz:"<<endl;
    cin >>dimension;
    return dimension;
}

void CrearMatriz(int **&pM, int dimension) {
    pM = new   int*[dimension];
    for(int f=0; f<dimension; f++)
        pM[f] = new int[dimension];

    for(int f=0; f<dimension; f++)
        for(int c=0; c<dimension; c++)
            pM[f][c] = rand()%5;

}

void Imprimir_Matriz(int **matriz, int dimension) {
    cout <<"\n";
    for(int cfilas =0; cfilas<dimension; cfilas++)
    {
        for(int ccol =0; ccol<dimension; ccol++)
            cout << setw(5) << matriz[cfilas][ccol];
        cout << "\n";
    }
}


void CrearMatrizTercera(int **&matriz, int **pM, int **pM1, int dimension) {
    matriz = new   int*[dimension];
    for(int f=0; f<dimension; f++)
        matriz[f] = new int[dimension];

    for(int f=0; f<dimension; f++){
        for(int c=0; c<dimension; c++){
            matriz[0][c]= pM[0][c]+pM1[0][c];
            matriz[dimension-1][c]= pM[dimension-1][c]+pM1[dimension-1][c];
            matriz[f][0]= pM[f][0]+pM1[f][0];
            matriz[f][dimension-1]= pM[f][dimension-1]+pM1[f][dimension-1];
        }
    }


}


