#include <iostream>

using namespace std;

/*
POO - Programación Orientada a Objetos

Objeto -> instancia de una clase
Clase -> colección de objetos

Libro -> Clase
 - cant paginas
 - autor (es)
 - color
 - publicado
 - leido

libro -> objeto
 - 300
 - Stewart
 - Calculo de v v
 - blanco
 -
 - no

*/

class Libro{
private:
    // atributos
    int cantPaginas;
    string autor;
    string titulo;
public:
    // constructor
    Libro(int cantPaginas, string autor, string titulo){
        this->cantPaginas = cantPaginas;
        this->autor = autor;
        this->titulo = titulo;
    }
    // destructor ~ virgulilla
    ~Libro(){
        cout << "El libro se ha destruido" << endl;
    }

    // métodos (sueles expresarse por un verbo)
    // setter -> setear /poner un valor a un atributo
    void setCantPaginas(int cp){
        cantPaginas = cp;
    }
    // getter -> get / obtener el valor de un atributo
    int getCantPaginas(){
        return cantPaginas;
    }
    string getAutor(){
        return autor;
    }
    string getTitulo(){
        return titulo;
    }

    void imprimirValores(){
        cout << cantPaginas << endl;
        cout << autor << endl;
        cout << titulo << endl;
    }

    void leidoPor(string nombre){
        cout << nombre << " ha leido el libro " << titulo << endl;
    }
};


int main() {
    int numero;
    Libro libro1(500, "Pepe", "La hormiga feliz");
//    cout << "Ingrese cantidad de paginas:";
//    cin >> numero;
//    libro1.setCantPaginas(numero);
//    cout << libro1.getCantPaginas() << endl;
//    cout << libro1.getAutor() << endl;
//    cout << libro1.getTitulo() << endl;

    libro1.imprimirValores();
    libro1.leidoPor("pierre");

    Libro libro2(200, "Manolito", "Una lechuga");
    libro2.imprimirValores();
    libro2.leidoPor("dayanna");

    return 0;
}
