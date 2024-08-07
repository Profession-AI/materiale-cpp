Namespace.cpp

#include <iostream>
#include <cmath>

void square(float* a) {
    *a = pow(*a, 2.0);
}

int main() {
    float i = 1;

    std::cout << "Il valore di i prima di invocare la funzione square è: " << i;

    square(&i);

    std::cout << "\nIl valore di i dopo l'invocazione della funzione square è: " << i;

    return 0;
}
