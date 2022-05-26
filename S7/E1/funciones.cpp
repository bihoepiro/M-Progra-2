//
// Created by Bihonda Epiquien  on 24/05/22.
//

#include "funciones.h"
#include <iostream>
#include <iomanip>
using namespace std;
int PedirDatos() {
    int dimension=0;
    cout <<"La dimension de la matriz: ";
    cin >> dimension;
    return dimension;
}

void CrearMatriz(int **&pM, int dimension) {
    pM= new int *[dimension];
    for (int f= 0; f<dimension; f++)
        pM[f]= new int [dimension];

    for (int f= 0; f<dimension; f++)
        for (int c= 0; c<dimension; c++)
            pM[f][c]= rand()%5;
}

void MatrizSuma(int **&pM, int **matriz1, int **matriz2, int dimension) {
    pM= new int *[dimension];
    for (int f= 0; f<dimension; f++)
        pM[f]= new int [dimension];

    for (int f= 0; f<dimension; f++)
        for (int c= 0; c<dimension; c++)
            pM[f][c]=matriz1[f][c]+matriz2[f][c];
}

void ImprimirMatriz(int **matriz, int dimension) {
    cout <<"\n";
    for(int cfilas =0; cfilas<dimension; cfilas++)
    {
        for(int ccol =0; ccol<dimension; ccol++)
            cout << setw(5) << matriz[cfilas][ccol];
        cout << "\n";
    }
}

