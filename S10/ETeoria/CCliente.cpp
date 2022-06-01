//
// Created by Bihonda Epiquien  on 31/05/22.
//

#include "CCliente.h"

CCliente::~CCliente() {

}

CCliente::CCliente(int _codigo, int _cantidad, int _Importe) {
    codigo= _codigo;
    cantidad= _cantidad;
    Importe= _Importe;
}

int CCliente::getImporte() const {
    return Importe;
}

void CCliente::AgregraPedido(CPizza *P) {
    pedidos.push_back(P);
}

void CCliente::ImprimirPedido() {
    cout << "Informe de pedido"<<endl;
    cout << "-----------------"<<endl;
    cout << "Codigo de cliente: "<< codigo <<endl;
    for (auto i:pedidos){
        i->ImprimirPizza();
    }
    cout << "Importe Total: "<< Importe<< endl;
}

void CCliente::ImportePorCliente() {
    for(auto i:pedidos)
        Importe += i->getPrecio();
}

