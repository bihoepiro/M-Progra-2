#include <iostream>

using namespace std;

class Algo{
private:
    int algo1;
    string algo2;
    void imprimir(){
        cout << "tome sopita" << endl;
    }
public:
    string algo3 = "hola";
    Algo(){}
    ~Algo(){}
    void haceAlgo(){

    }
    void haceAlgo2(){
        // otras funcionalidades
        imprimir();
    }
};

int main() {
    Algo alguito;
    // new - delete
    Algo *punteroAlgo = new Algo();
    int *puntero = new int;
    // puntero a objeto

    alguito.haceAlgo();
    punteroAlgo->haceAlgo();
    cout << alguito.algo3 << endl;
    cout << punteroAlgo->algo3 << endl;
    alguito.haceAlgo2();
    punteroAlgo->haceAlgo2();
    return 0;
}
