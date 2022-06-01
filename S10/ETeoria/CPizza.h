//
// Created by Bihonda Epiquien  on 31/05/22.
//

#ifndef ETEORIA_CPIZZA_H
#define ETEORIA_CPIZZA_H
#include "string"
#include "vector"
#include "iostream"
using namespace std;

class CPizza {
private:
    string Tipo;
    string Tamano;
    int Precio;
public:
    CPizza(string _Tamano, string _Tipo, int _Precio);
    virtual ~CPizza();
    int getPrecio() const;
    void ImprimirPizza();
};


#endif //ETEORIA_CPIZZA_H
