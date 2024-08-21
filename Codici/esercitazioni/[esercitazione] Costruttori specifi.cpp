[esercitazione] Costruttori specifici

#include <bits/stdc++.h>
using namespace std;

// Definisci una classe Rettangolo con:
// due attributi float: base e altezza
// un costruttore specifico: deve inizializzare base e altezza agli argomenti di input
// Testa il tuo codice creando un oggetto di tipo Rettangolo e stampandone a video gli attributi.
// Aggiungi un costruttore di default alla classe Rettangolo che inizializzi base e altezza rispettivamente a 4.0 e 5.0.
// Crea un secondo oggetto di tipo Rettangolo usando il costruttore di default.
// Stampa a video gli attributi del secondo oggetto creato.

class Rettangolo {
public:
    float base, altezza;

    Rettangolo(){
         base = 4.0;
         altezza = 5.0;
    }

    Rettangolo(float _base, float _altezza) {
        base = _base;
        altezza = _altezza;
    }
};

int main() {

    Rettangolo r1(11.0, 12.0);
    cout << "r1: Valore di base: " << r1.base << endl;
    cout << "r1: Valore di altezza: " << r1.altezza << endl << endl;

    Rettangolo r2;
    cout << "r2: Valore di base: " << r2.base << endl;
    cout << "r2: Valore di altezza: " << r2.altezza << endl;
}

