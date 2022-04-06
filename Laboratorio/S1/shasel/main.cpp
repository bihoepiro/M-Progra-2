#include <iostream>
#include <string>
using namespace std;
int main() {
    int velocidad;
    string lugar, via;
    cout<<"Ingrese a que lugar ira:";
    getline(cin, lugar);
    cout<<"que via tomara:";
    getline(cin, via);
    cout<<"velocidad: ";
    cin>>velocidad;
    if (lugar == "Zona urbana"){
        if (via == "Zona escolar")
            if (velocidad>30)
                cout<<"Excedio límite de velocidad";
            else
                cout<<"Se encuentra en el parametro de velocidad";
        else if (via == "calles y jirones")
            if (velocidad>40)
                cout<<"Excedio límite de velocidad";
            else
                cout<<"Se encuentra en el parametro de velocidad";
        else if (via == "avenidas")
            if (velocidad>60)
                cout<<"Excedio límite de velocidad";
            else
                cout<<"Se encuentra en el parametro de velocidad";
        else
        if (velocidad>80)
            cout<<"Excedio límite de velocidad";
        else
            cout<<"Se encuentra en el parametro de velocidad";
    }
    else {
        if (via == "Caminos rurales")
            if (velocidad>60)
                cout<<"Excedio límite de velocidad";
            else
                cout<<"Se encuentra en el parametro de velocidad";
        else if (via == "vehiculos de carga")
            if (velocidad>80)
                cout<<"Excedio límite de velocidad";
            else
                cout<<"Se encuentra en el parametro de velocidad";
        else if (via == "servicio publico")
            if (velocidad>90)
                cout<<"Excedio límite de velocidad";
            else
                cout<<"Se encuentra en el parametro de velocidad";
        else
        if (velocidad>100)
            cout<<"Excedio límite de velocidad";
        else
            cout<<"Se encuentra en el parametro de velocidad";
    }


    return 0;
}
