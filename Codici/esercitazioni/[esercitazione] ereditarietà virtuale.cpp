[esercitazione] ereditarietà virtuale


#include <bits/stdc++.h>
using namespace std;

// Definisci una classe Veicolo con:
- un attributo intero "posti"
- un attributo di tipo string "ruote"
- un costruttore di default che inizializza tali attributi

// Definisci una classe Automobile che eredita dalla classe Veicolo con:
- un attributo booleano "civile"

// Definisci una classe VeicoloMilitare che eredita dalla classe Veicolo con:
- un attributo booleano "esplora"

// Definisci una classe Hammer che eredita da VeicoloMilitare e Automobile con:
- un costruttore di default che inizializza tali attributi
- un attributo booleano "anfibio"
- un costruttore che riceve le tre classi base come argomenti

// Definisci una classe Stringa che eredita da VeicoloCivile e VeicoloMilitare con:
- un attributo string "corde"

// Costruisci il tuo codice e verifica la presenza dei problemi a diamante.

class Veicolo {
public:
    int ruote;
    int posti;

    Veicolo() {
        ruote = 4;
        posti = 4;
    }
};

class VeicoloCivile : public Veicolo {
public:
    bool abs;
    bool esp;

    VeicoloCivile() {
        abs = true;
        esp = true;
    }
};

class VeicoloMilitare : public Veicolo {
public:
    bool terrestre;
    bool anfibio;

    VeicoloMilitare() {
        terrestre = true;
        anfibio = true;
    }
};

class Hammer : public VeicoloCivile, public VeicoloMilitare {
public:
    string colore;
    string modello;

    Hammer() {
        colore = "nero";
        modello = "H2";
    }
};

int main() {
    Veicolo v1;
    VeicoloCivile c1;
    VeicoloMilitare m1;
    Hammer h1;

    h1.posti = 6;
    cout <<"h1 : posti --> " << h1.posti <<endl;

}



