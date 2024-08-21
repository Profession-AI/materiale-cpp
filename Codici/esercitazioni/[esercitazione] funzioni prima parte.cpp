[esercitazione] funzioni prima parte

#include <stdio.h>

// Definisci una funzione che dimezzi un numero (float).
// La funzione deve:
// - implementare il passaggio per valore.
// - restituire il numero così dimezzato.
float dimezza(float numero_da_dimezzare) {
    return numero_da_dimezzare / 2.0;
}

// Definisci una funzione del tutto analoga ma:
// - deve implementare il passaggio per riferimento.
// - non deve restituire nulla.
void dimezza_rif(float *ptr_a_numero_da_dimezzare) {
    *ptr_a_numero_da_dimezzare /= 2.0;
}

int main() {
    float numero = 10.0;
    printf("Numero dimezzato (per valore): %f\n", dimezza(numero));
    
    dimezza_rif(&numero);
    printf("Numero dimezzato (per riferimento): %f\n", numero);
    
}

int main(){

    float a = 4.0;

    printf("Il valore di a dimezzato è %.2f", dimezza(a));

    printf("\nLa variabile a vale %.2f", a);

    printf("\nInvoco la funzione dimezza_riffa");

    dimezza_riffa(&a);

    printf("\nLa variabile ora vale %.2f", a);

    printf("\nInvoco la funzione riffa");

    riffa(&a);

    printf("\nLa variabile ora vale %.2f", a);
}




