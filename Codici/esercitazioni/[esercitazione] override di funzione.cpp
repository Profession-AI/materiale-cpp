[esercitazione] override di funzione 

#include <bits/stdc++.h>

// Definisci una classe "Rettangolo" con:
- due attributi "base" e "altezza" di tipo float
- costruttore specifico che permetta di specificare entrambi gli attributi
- un metodo per calcolare l'area

// Definisci la classe "Quadrato" che eredita la base ed altezza del rettangolo con:
un costruttore specifico che permetta di specificare l'altezza imponendo il valore uguale anche alla base
un override del metodo per il calcolo dell'area che calcoli l'area con 1 lato alla seconda

// Testa il tuo codice creando un oggetto Rettangolo ed un oggetto Quadrato e calcolandone l'area.
*/

class Rettangolo {
public:
    float base, altezza;
    Rettangolo(float _base, float _altezza) {
        base = _base;
        altezza = _altezza;
    }

    float calcolo_area() {
        return base * altezza;
    }
};

class Quadrato : public Rettangolo {
public:
    Quadrato(float _base) : Rettangolo(_base, _base) {}

    float calcolo_area() {
        return pow(base, 2.0);
    }
};


int main(){
    Rettangolo r1(3.0, 5.0);
    Quadrato q1(4.0);

    cout << "r1 area -> " << r1.calcolo_area() << endl;
    cout << "q1 area -> " << q1.calcolo_area() << endl;
}

