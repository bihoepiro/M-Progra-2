//
// Created by Bihonda Epiquien  on 9/11/21.
//

#include "funciones.h"
using namespace std;

int IngresaCantaidad(string mensaje) {
    int num;
    cout << "Ingrese numero de "<< mensaje << ": ";
    cin>> num;
    return num;
}

void PideDatos(int num, string *&array, string mensaje) {
    string num1=" ";
    cout << "Nombre de "<< mensaje<<":"<< endl;
    for (int i=0; i<num; i++){
        cout << "Nombre "<< i+1 << ": "<< endl;
        cin>> num1;
        while(array[i-1] == num1){
            cout << "Nombre "<< i+1 << ": "<< endl;
            cin>> num1;
        }
        array[i]=num1;
    }
}

void Emparejamos(string *array1, string *array2, int num1, int num2) {
    cout << "Posibles parejas: "<< endl;
    for(int i=0; i<num1; i++){
        for (int i2=0; i2<num2; i2++){
            cout << array1[i]<< "  "<<array2[i2]<< endl;
        }
    }
}

void ImprimirArray(string mensaje, string *array, int num) {
    cout << "Nombre registrados de "<< mensaje<< ": "<< endl;
    for (int i=0; i<num; i++){
        cout<< array[i]<<endl;
    }
}

