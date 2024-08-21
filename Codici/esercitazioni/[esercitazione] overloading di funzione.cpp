[esercitazione] overloading di funzione

#include <bits/stdc++.h>
#include <cstring> // string.h
using namespace std;

// Importa la libreria per poter definire funzioni di tipo string.
// Definisci una funzione per poter sommare i valori all'interno delle stringhe.

// 1: Una funzione con due parametri di tipo int (addInt) che stampa semplicemente la somma
//    NB: Stampa il valore non restituire alcun valore di ritorno!

void add(int x, int y){
    printf("The sum of %d and %d is %d.\n", x, y, x+y);
}

// 2: Una funzione con due parametri di tipo string (addString) che stampa semplicemente la concatenazione
//    dei due valori sotto forma di successione di stringhe.

void add(string s1, string s2){
    printf("%s%s\n", s1.c_str(), s2.c_str());
}

int main(){

}
