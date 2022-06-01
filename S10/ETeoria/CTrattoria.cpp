//
// Created by Bihonda Epiquien  on 31/05/22.
//

#include "CTrattoria.h"

CTrattoria::~CTrattoria() {

}

CTrattoria::CTrattoria(string _nombre, int _importe) {
    Nombre= _nombre;
    importe= _importe;
}

void CTrattoria::AgregarCliente(CCliente *C) {
    Clientes.push_back(C);
}

void CTrattoria::ImporteTotal() {
    for(auto i:Clientes)
        importe += i->getImporte();
}

void CTrattoria::ImprimirImporte() {
    cout << "Importe de la Trattoria "<<Nombre <<endl;
    cout << "Importe total: "<< importe<<endl;
}
