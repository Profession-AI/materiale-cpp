[esercitazione] Classi.cpp

#include <bits/stdc++.h>
using namespace std;

// Definisci una classe PuntoCartesiano che:
// contenga due attributi di tipo float (coordinata x e coordinata y)
// contenga la funzione visualizza_coordinate per stampare le coordinate x e y del punto
// contenga la funzione traccia_segmento che restituisca la lunghezza del segmento tra le coordinate
// del punto cartesiano di cui fa parte e quelle di un secondo PuntoCartesiano passato come argomento di input


class PuntoCartesiano {
public:
    float x, y;

    void visualizza_coordinate() {
        cout << "(" << x << ";" << y << ")" << endl;
    }

    float calcola_segmento(PuntoCartesiano p2) {
        // sqrt((x2-x1)^2+(y2-y1)^2)
        return sqrt(pow((p2.x - x), 2.0) + pow((p2.y - y), 2.0));
    }
};

int main() {
    PuntoCartesiano p1, p2;
    p1.x = 2.0, p1.y = 3.0;
    p2.x = 3.0, p2.y = 5.0;

    cout << "P1: ";
    p1.visualizza_coordinate();
    cout << "P2: ";
    p2.visualizza_coordinate();
    cout << "La lunghezza del segmento congiungente è: " << p1.calcola_segmento(p2) << endl;

    return 0;
}
