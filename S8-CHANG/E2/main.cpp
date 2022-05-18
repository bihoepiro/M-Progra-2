#include <iostream>
using namespace std;

class Viaje{
private:
    string destino;
    int tiempoDeViaje;
    bool temporadaAlta;
    string clase;
public:
    Viaje(string d, int t, bool ta, string c){
        destino = d;
        tiempoDeViaje = t;
        temporadaAlta = ta;
        clase = c;
    }
    Viaje(){}
    // destructor solo existe 1
    ~Viaje(){}

    int cacularCostoViaje(){
        int costoTotal = 0;
        costoTotal = tiempoDeViaje * 50;
        if (temporadaAlta == true){
            costoTotal *= 2;
        }
        if (clase == "business"){
            costoTotal *= 4;
        }

        if (destino == "Madrid"){
            costoTotal += 500;
        }
        else if (destino == "Berlin"){
            costoTotal += 1000;
        }
        else if (destino == "Sidney"){
            costoTotal += 1500;
        }
        else if (destino == "Seul"){
            costoTotal += 2000;
        }
        return costoTotal;
    }
};

int main() {
    Viaje viaje1("Madrid", 14, false, "business");
    Viaje viaje2("Sidney", 5, true, "economy");
    Viaje viaje3("Madrid", 3, false, "business");
    Viaje viaje4("Seul", 10, true, "economy");
    Viaje viaje5("Berlin", 9, true, "business");

    cout << "Precio1: " << viaje1.cacularCostoViaje() << endl;
    cout << "Precio2: " << viaje2.cacularCostoViaje() << endl;
    cout << "Precio3: " << viaje3.cacularCostoViaje() << endl;
    cout << "Precio4: " << viaje4.cacularCostoViaje() << endl;
    cout << "Precio5: " << viaje5.cacularCostoViaje() << endl;

    return 0;
}
