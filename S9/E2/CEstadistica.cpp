//
// Created by Bihonda Epiquien  on 24/05/22.
//

#include "CEstadistica.h"

CEstadistica::CEstadistica(const vector<double> &v1) : v1(v1) {}

CEstadistica::~CEstadistica() {}

const vector<double> &CEstadistica::getV1() const {
    return v1;
}

void CEstadistica::setV1(const vector<double> &v1) {
    CEstadistica::v1 = v1;
}

double CEstadistica::hallarMediana() {
    sort(v1.begin(), v1.end());
    double mediana;
    if (v1.size() % 2 ==0){
        mediana = (v1[v1.size()/2] + v1[(v1.size()/2)-1]/2);
    }
    else {
        mediana = v1[v1.size()/2];
    }
    return mediana;
}

double CEstadistica::hallarMedia() {
    double suma=0;
    int iter=0;
    for( auto i= begin(v1); i != end(v1); i++){
        suma += *i;
        iter+= 1;
    }
    return suma/iter;
}

void CEstadistica::MostrarDatos() {
    sort(v1.begin(), v1.end());
    cout<<"Muestra: ";
    cout<<"{";
    for (auto i = begin(v1); i!= end(v1) ; i++){
        if (*i == (v1[v1.size()-1])){
            cout<< *i<<"";
        }
        else{
            cout<< *i<<", ";
        }
    }
    cout<<"}"<<endl;
}
