[esercitazione] Namespaces 

#include <cmath> // Libreria matematica standard in c++
#include "Geometria.h"

// Crea una namespace chiamata Geometria che definisce una struct Punto_Cartesiano contenente
// coordinate x e y (entrambi float).
namespace Geometria {
    struct Punto_Cartesiano {
        float X, Y;
    };
    
    // Calcola la distanza euclidea tra due punti p1 e p2 utilizzando la formula della distanza
    // euclidea: sqrt(pow(p2.x-p1.x, 2) + pow(p2.y-p1.y, 2))
    float calcola_distanza(Punto_Cartesiano p1, Punto_Cartesiano p2) {
        return sqrt(pow(p2.X-p1.X, 2) + pow(p2.Y-p1.Y, 2));
    }
}

int main() {
    Geometria::Punto_Cartesiano p1, p2;

    p1.x = 2.0; p1.y = 3.0;
    p2.x = 3.0; p2.y = 7.0;

    printf("P1: (%.1f , %.1f)\n", p1.x, p1.y);
    printf("P2: (%.1f , %.1f)", p2.x, p2.y);
}

