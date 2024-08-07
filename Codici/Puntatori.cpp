Puntatori.cpp

#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero_di_dalmata = 2;
    int* puntatore_a_numero_di_dalmata;

    puntatore_a_numero_di_dalmata = &numero_di_dalmata;

    printf("Il valore di numero_di_dalmata è %d", *puntatore_a_numero_di_dalmata);

    *puntatore_a_numero_di_dalmata = *puntatore_a_numero_di_dalmata + 99;

    printf("\nIl valore di numero_di_dalmata è %d", *puntatore_a_numero_di_dalmata);

    return 0;
}
