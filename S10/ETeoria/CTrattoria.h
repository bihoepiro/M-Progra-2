//
// Created by Bihonda Epiquien  on 31/05/22.
//

#ifndef ETEORIA_CTRATTORIA_H
#define ETEORIA_CTRATTORIA_H
#include "CCliente.h"
#include "string"
#include "vector"
#include "iostream"
using namespace std;
class CTrattoria {
private:
    string Nombre;
    vector<CCliente*> Clientes;
    int importe=0;
public:
    //acceso
    CTrattoria(string _nombre, int _importe);
    virtual ~CTrattoria();
    //metodos
    void AgregarCliente(CCliente *C);
    void ImporteTotal();
    void ImprimirImporte();
};


#endif //ETEORIA_CTRATTORIA_H
