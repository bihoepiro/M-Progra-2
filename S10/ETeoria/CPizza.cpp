//
// Created by Bihonda Epiquien  on 31/05/22.
//

#include "CPizza.h"

CPizza::~CPizza() {

}

int CPizza::getPrecio() const {
    return Precio;
}

CPizza::CPizza(string _Tamano, string _Tipo, int _Precio) {
    Tamano= _Tamano;
    Tipo= _Tipo;
    Precio= _Precio;
}

void CPizza::ImprimirPizza() {
    cout << "El tamano de pizza en este pedido es: "<<Tamano<<endl;
    cout << "El tipo de pizza en este pedido es: "<<Tipo<<endl;
}

