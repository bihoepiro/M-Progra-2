//
// Created by Bihonda Epiquien  on 26/04/22.
//

#include "funciones.h"
using namespace std;

int PedirDimension() {
    int dimension;
    cout << "Ingresa la dimension de la matriz: ";
    cin >> dimension;
    while (dimension<3){
        cout << "Ingresa la dimension de la matriz: ";
        cin >> dimension;
    }
    return dimension;
}

void CrearMatriz(int **&pM, int dimension) {
    pM= new int *[dimension];
    for (int f=0; f<dimension; f++){
        pM[f] = new int[dimension];
    }

    for (int f=0; f<dimension; f++){
        for (int c=0; c<dimension; c++)
            pM[f][c] = pM[c][f] = 1+rand()%100;
    }
}

void LiberarMatriz(int **&pM, int dimension) {
    for (int f=0; f<dimension; f++){
        delete []pM[f];
    }
    delete []pM;
    pM= nullptr;
}

void ImprimirMatriz(int **pM, int dimension) {
    cout <<"\n";
    for (int f=0; f<dimension; f++){
        for (int c=0; c<dimension; c++)
            cout << setw(5) << pM[f][c];
        cout <<"\n";
    }
}




