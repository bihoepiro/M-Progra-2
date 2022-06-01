//
// Created by Bihonda Epiquien  on 31/05/22.
//

#ifndef ETEORIA_CCLIENTE_H
#define ETEORIA_CCLIENTE_H
#include "CPizza.h"
#include "string"
#include "vector"
#include "iostream"
using namespace std;

class CCliente {
private:
    int codigo;
    vector<CPizza*> pedidos;
    int cantidad;
    int Importe=0;
public:
    CCliente(int _codigo, int _cantidad, int _Importe);
    virtual ~CCliente();
    //metodos
    void AgregraPedido(CPizza *P);
    void ImprimirPedido();
    void ImportePorCliente();

    int getImporte() const;
};


#endif //ETEORIA_CCLIENTE_H
