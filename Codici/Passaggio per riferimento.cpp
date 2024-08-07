Passaggio per riferimento.cpp

#include <iostream>
#include <cmath>

void square(float* a) {
    *a = pow(*a, 2.0);
}

int main() {
    float i = 1;

    printf("Il valore di i prima di invocare la funzione square è: %f", i);

    square(&i);

    printf("\nIl valore di i dopo l'invocazione della funzione square è: %f", i);

    return 0;
}
