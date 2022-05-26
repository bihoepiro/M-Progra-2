#include <iostream>
#include "CEstadistica.h"
using namespace std;
int main() {
    vector<double> T2 = {3, 10, 36, 80, 79, 24, 5, 8};
    vector<double> T= {18, 20, 23, 22, 21};


    cout <<"Muestra vector 1"<<endl;
    CEstadistica E1(T);
    E1.MostrarDatos();
    cout <<"Media: " <<E1.hallarMedia()<<endl;
    cout <<"Mediana: " <<E1.hallarMediana()<<endl;


    cout<<endl;
    cout <<"Muestra vector 2"<<endl;
    CEstadistica E2(T2);
    E2.MostrarDatos();
    cout <<"Media: " <<E2.hallarMedia()<<endl;
    cout <<"Mediana: " <<E2.hallarMediana()<<endl;
}
