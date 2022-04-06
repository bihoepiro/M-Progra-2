
#ifndef EJERCICIO_1_FUNCIONES_H
#define EJERCICIO_1_FUNCIONES_H
#include <iostream>
#include <string>
using namespace std;
void Validacion(float &nota, int i);
void IngresarDatos(float &suma, float &eliminado);
float CalcularPromedio(float suma, float eliminado);
string Condicion(float promedio);
void PresentarDatos(float promedio, float eliminado, string condicion);
#endif //EJERCICIO_1_FUNCIONES_H
