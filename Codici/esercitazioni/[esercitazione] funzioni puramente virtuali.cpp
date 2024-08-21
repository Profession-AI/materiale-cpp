[esercitazione] funzioni puramente virtuali

#include <iostream>
#include <string>
using namespace std;

/*
Definisci una classe "Animale" con:
- una stringa tipo
- un metodo verso

Rendi questa classe una classe astratta

Definisci una classe "Gatto" che eredita da "Animale" e:
- un costruttore di default che inizializza l'attributo tipo a "felino"
- definisci il metodo verso per emettere il suono tipico di un gatto

Definisci una classe "Topo" che eredita da "Animale" con:
- un costruttore di default che inizializza l'attributo tipo a "roditore"
- definisci il metodo verso per emettere il suono tipico di un topo

Testa le due classi nel main, ricordati però che dovrai usare puntatori o riferimenti perché la classe Animale è astratta.
*/

class Animale {
public:
    string tipo;
    virtual void verso() = 0;
};

class Gatto : public Animale {
public:
    Gatto() {
        tipo = "felino";
    }

    void verso() {
        cout << "Il verso di questo animale è un miagolio." << endl;
    }
};

class Topo : public Animale {
public:
    Topo() {
        tipo = "roditore";
    }

    void verso() {
        cout << "Il verso di questo animale è uno squittio." << endl;
    }
};


int main() {
    Gatto g1;
    Topo t1;
    Animale* p_a1 = &g1;
    Animale* p_a2 = &t1;

    p_a1->verso();
    p_a2->verso();

    return 0;
}
