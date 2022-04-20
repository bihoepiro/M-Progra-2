//
// Created by Samanta on 19/04/2022.
//

#include "funciones.h"

int pedirNadadores(){
    int nadadores;
    do{
        cin >> nadadores;
    }while(nadadores <= 0 or nadadores >=17);
    return nadadores;
}

void hallarEstadisticas(int nadadores){
    float tiempo;
    float suma = 0;
    float mayorT = 0;
    float menorT;
    for (int i=0; i<nadadores; i++){
        cout << "Ingrese tiempo del nadador " << i+1 << ":";
        cin >> tiempo;
        suma += tiempo;
        if (tiempo > mayorT){
            mayorT = tiempo;
        }
        if (i == 0){
            menorT = tiempo;
        }
        if (tiempo < menorT){
            menorT = tiempo;
        }
    }
    cout << "El menor tiempo fue: " << menorT << endl;
    cout << "El mayor tiempo fue: " << mayorT << endl;
    cout << "El tiempo promedio es: " << suma/nadadores << endl;
}