#include <iostream>
using namespace std;

void obtener_cadena(string *cadena){
    cin >> *cadena;
}

void ensamblar(string *cadena){
    char robot = 'A';
    int n = 0;
    while (true){
        if (robot == 'A'){
            if ((*cadena)[n] == 'a' and n<cadena->length()){
                n++;
            }
            else if ((*cadena)[n] == 'r' and n<cadena->length()){
                n++;
                robot = 'B';
                continue;
            }
            else{
                cout << "se termino el ensamblaje error" << endl;
                break;
            }
        }
        else if (robot == 'B'){
            if (n == cadena->length()-1){
                cout << "ensamblaje exitoso" << endl;
                break;
            }
            else if ((*cadena)[n] == 'b'){
                n++;
            }
            else{
                cout << "se termino el ensamblaje error" << endl;
                break;
            }
        }
    }
}

int main() {
    auto *cadena = new string;
    obtener_cadena(cadena);
    ensamblar(cadena);
    return 0;
}
