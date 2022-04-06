//
// Created by HP on 5/04/2022.
//

#include "funciones.h"

void Validacion(float &nota, int i){
    while(nota> 21 or nota<0){
        cout << "Ingresa nota" << i << ":" << endl;
        cin >> nota;
    }
}

void IngresarDatos(float &suma, float &eliminado){
    float nota;
    for(int i=1; i<5; i++){
        cout << "Ingresa nota" << i << ":" << endl;
        cin >> nota;
        Validacion(nota, i);
        suma = suma + nota;
        if (nota < eliminado){
            eliminado = nota;
        }
    }
}

float CalcularPromedio(float suma, float eliminado){
    float Promedio;
    Promedio= (suma-eliminado)/3;
    return Promedio;
}

string Condicion(float promedio){
    string condicion;
    if (promedio >= 13)
        {
            condicion="Aprobado";
        }
    else {
        condicion="Desaprobado";
    }
    return condicion;
}

void PresentarDatos(float promedio, float eliminado, string condicion){
    cout << "Resultado"<< endl;
    cout << "Promedio: "<< promedio<< endl;
    cout << "Condicion: "<< condicion<< endl;
    cout << "Se eliminó: "<< eliminado<< endl;
}