Strumenti di programmazione:Funzioni

#include <iostream>

float area_triangolo(float base, float altezza) {
    return (base * altezza) / 2.0;
}

int main() {
    float b1, h1;
    std::cout << "Inserisci la base del triangolo: ";
    std::cin >> b1;
    std::cout << "Inserisci l'altezza del triangolo: ";
    std::cin >> h1;
    float area = area_triangolo(b1, h1);
    
    std::cout << "L'area del triangolo che ha per base " << b1 << " e per altezza " << h1 << " è " << area << "." << std::endl;

    return 0;
}
