//
// Created by HP on 12/04/2022.
//

#include "funciones.h"
using namespace std;
void ValidarDatosP(float &x) {
    while( x < 0 ){
        cout << "Ingrese profundidad: " << endl;
        cin >> x;
    }
}

void IngresarDatos(float &a, float &l, float &p) {
    cout << "Ingrese profundidad: " << endl;
    cin >> p;
    ValidarDatosP(p);
    cout << "Ingrese largo: " << endl;
    cin >> l;
    ValidarDatosL(l);
    cout << "Ingrese ancho: " << endl;
    cin >> a;
    ValidarDatosA(a);

}

void ValidarDatosA(float &x) {
    while( x < 0 ){
        cout << "Ingrese ancho: " << endl;
        cin >> x;
    }
}

void ValidarDatosL(float &x) {
    while( x < 0 ){
        cout << "Ingrese largo: " << endl;
        cin >> x;
    }
}

void Calculo(float &exc, float &recu, float &total, float a, float l, float p) {
    exc = (a*l*p) * 100;
    recu = ((2*((l*p)+(p*a)))+ (a*l)) * 150;
    total = exc + recu;
}

void Presentar(float exc, float recu, float total) {
    cout << "Resultado" <<endl;
    cout << "Costo de excarvacion: " << exc<< endl;
    cout << "Costo de recubrimiento: " << recu<< endl;
    cout << "Costo total: " << total<< endl;
}
