//Enunciado
//Imagine que se desea tener una aplicaci ́on que permita formar parejas, registrando nom-
//bres de chicas en un array y nombres de chicos en otro array. La aplicaci ́on busca formar
//
//todas las combinaciones de parejas posibles.
//Desarrolle un programa que realice lo siguiente:
//• Leer nombres de chicas a un array de cadenas, cuidando que se no se registren
//nombres repetidos. El programa lee como dato el n ́umero de nombres de damas a
//registrar.
//• Leer nombres de chicos a un array de cadenas, cuidando que no se registre nombres
//repetidos.El programa lee como dato el n ́umero de nombres de varones a registrar.
//• El programa deber ́a imprimir ́a todas las parejas que puedan formarse entre un
//integrante del array de chicas y un integrante del array de chicos.
//
//• Para asignar el puntaje a esta pregunta es necesario que se trabaje uti-
//lizando array din ́amicos y se haga un buen uso de la memoria.



#include "funciones.h"
using namespace std;

int main() {
    string *pA=nullptr;
    string  *pA2=nullptr;
    int num1= IngresaCantaidad("damas");
    pA= new string [num1];
    int num2= IngresaCantaidad("varones");
    pA2= new string [num2];
    PideDatos(num1, pA, "damas");
    PideDatos(num2, pA2, "varones");
    ImprimirArray("damas", pA, num1);
    ImprimirArray("varones", pA2, num2);
    Emparejamos(pA, pA2, num1,num2);


    //eliminando
    delete []pA;
    pA= nullptr;
    delete []pA2;
    pA2= nullptr;
    return 0;
}
