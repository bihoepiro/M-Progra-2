#include <iostream>

using namespace std;

int main() {
    int arreglo[] = {4, 1, 6, 51, 4, 65, 16, 5262, 45};
    int arreglo2[8];

    cout << arreglo[0] << endl;
    arreglo[0] = 48;
    cout << arreglo[0] << endl;

    for (int i=0; i<9; i++){
        cout << arreglo[i] << " ";
    }

    cout << endl;
    for (int &iter:arreglo){
        cout << iter << " ";
    }

    char cadena[] = {'H', 'o', 'l', 'a'};
    string cadena2 = "Hola";

    return 0;
}
