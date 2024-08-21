[esercitazione] costruttori di default.cpp

#include <bits/stdc++.h>
using namespace std;

// Definisci una classe Rettangolo con:
// due attributi float: base e altezza
// un costruttore di default: deve inizializzare base e altezza rispettivamente a 4.0 e 5.0
// Testa il codice creando un oggetto di tipo Rettangolo e stampandone a video gli attributi.
// Ricordati di impostare l'accessibilità pubblica per tutti i membri interni alla classe.

class Rettangolo {
public:
    float base, altezza;

    Rettangolo() {
        base = 4.0;
        altezza = 5.0;
    }
};

int main() {
    Rettangolo r1;
    cout << "Il valore di base è: " << r1.base << endl;
    cout << "il valore di altezza è: " <<r1.altezza <<end1;
