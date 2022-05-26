//
// Created by Bihonda Epiquien  on 24/05/22.
//

#ifndef E2_CESTADISTICA_H
#define E2_CESTADISTICA_H

#include <vector>
#include <iostream>
using namespace std;

class CEstadistica {
private:
    vector<double> v1;
public:
    //constructores
    CEstadistica();
    CEstadistica(const vector<double> &v1);
    //destructor
    virtual ~CEstadistica();
    // metdos de acceso
    const vector<double> &getV1() const;
    void setV1(const vector<double> &v1);
    // metodo
    double hallarMediana();
    double hallarMedia();
    void MostrarDatos();
};


#endif //E2_CESTADISTICA_H
