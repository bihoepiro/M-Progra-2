//
// Created by HP on 12/04/2022.
//
#include <iostream>
#include "funciones.h"
using namespace std;
void PedirNumero(int &num){
    do{
        cout << "Ingresa un numero > 10: ";
        cin >> num;
    }while(num < 11);
}

bool esPrimo(int num){
    bool t=true;
    int i=2, res;
    while(t && i<num){
        res= num % i;
        if (res == 0){
            t = false;
        }
        i= i+1;
    }
    return t;
}

void misPrimos(int &antPrimo, int &sigPrimo, int num){
    int ns= num+1, na= num-1;
    while(na < num){
        if (esPrimo(na)){
            antPrimo=na;
            break;
        }
        else{
            na= na-1;
        }
    }

    while(ns > num){
        if (esPrimo(ns)){
            sigPrimo=ns;
            break;
        }
        else{
            ns= ns+1;
        }
    }
}