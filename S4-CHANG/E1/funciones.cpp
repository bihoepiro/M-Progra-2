//
// Created by Samanta on 19/04/2022.
//

#include "funciones.h"

int pedir_numero(){
    int numero;
    do{
        cin >> numero;
    } while (numero < 50);
    return numero;
}

int hallar_suma(int* numero){
    int suma = 0;
    int contador = 0;

    for (int i=0; i< *numero; i++){
        if (i%5==0 or i%7==0){
            suma += i;
            contador += 1;
        }
    }

    cout << "Hay " << contador << "multiplos de 5 o 7" << endl;

    return suma;
}