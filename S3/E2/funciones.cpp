//
// Created by HP on 12/04/2022.
//

#include "funciones.h"
using namespace std;

bool esPalindrome(string frase, int i, int end)
{
    if(end-i==1 || i==end){
        return true;}
    else{
        if(frase[i]==frase[end]){
            return esPalindrome(frase,i+1,end-1);}
        else{
            return false;}
    }
}

string PedirFrase() {
    string frase;
    do{cout <<"Ingrese frase:"<< endl;
        getline(cin, frase);
    }while (frase == "");
    return frase ;
}



void Mini(string &frase) {
    for (int i = 0; i < frase.length(); i++) {
        frase[i] = tolower(frase[i]);
    }
}

void ImprimirResultados(string frase,int i,int end) {
    Mini(frase);
    if (esPalindrome(frase, i, end)){
        cout <<"SI es Palindrome"<< endl;
    }
    else{
        cout <<"NO es Palindrome"<< endl;
    }
}

