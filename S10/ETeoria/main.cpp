#include <iostream>
#include "CTrattoria.h"

int main() {
    CCliente* C1= new CCliente(564534231, 10, 0);
    CPizza* P1= new CPizza("familiar", "hawaina", 50);
    CPizza* P2= new CPizza("personal", "margarita", 40);
    CPizza* P3= new CPizza("personal", "hawaina", 20);
    CPizza* P4= new CPizza("personal", "hawaina", 30);
    CPizza* P5= new CPizza("familiar", "napolitana", 50);
    CPizza* P6= new CPizza("familiar", "margarita",60);
    CPizza* P7= new CPizza("familiar", "hawaina",70);
    CPizza* P8= new CPizza("personal", "napolitana",10);
    CPizza* P9= new CPizza("personal", "napolitana",50);
    CPizza* P10= new CPizza("personal", "margarita",56);
    C1->AgregraPedido(P1);C1->AgregraPedido(P2);C1->AgregraPedido(P3);C1->AgregraPedido(P4);
    C1->AgregraPedido(P5);C1->AgregraPedido(P6);C1->AgregraPedido(P7);C1->AgregraPedido(P8);
    C1->AgregraPedido(P9);C1->AgregraPedido(P10);
    C1->ImportePorCliente();
    C1->ImprimirPedido();
    cout << "----------------------"<<endl;
    CCliente* C2= new CCliente(135126781, 5, 0);
    CPizza* P11= new CPizza("familiar", "hawaina", 50);
    CPizza* P12= new CPizza("personal", "margarita",10);
    CPizza* P13= new CPizza("personal", "hawaina",30);
    CPizza* P14= new CPizza("personal", "hawaina",20);
    CPizza* P15= new CPizza("familiar", "napolitana",55);
    C2->AgregraPedido(P11);C2->AgregraPedido(P12);C1->AgregraPedido(P13);C2->AgregraPedido(P14);
    C2->AgregraPedido(P15);
    C2->ImportePorCliente();
    C2->ImprimirPedido();
    cout << "----------------------"<<endl;
    CTrattoria T("BIPI", 0);
    T.AgregarCliente(C1);
    T.AgregarCliente(C2);
    T.ImporteTotal();
    T.ImprimirImporte();
}
