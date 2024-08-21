[esercitazione] Tipi di dato booleani

#include <stdio.h>
#include <stdbool.h>

int main() {
    bool flag = false;

    printf("Flag: %s", flag ? "true" : "false");

    return 0;
}




// includi le librerie opportune per usare i booleani

int main(){
    // Definisci due variabili booleane, una false e l'altra true
    bool flag1;
    bool flag2;

    flag1 = false;
    flag2 = true;

    // Stampa le due variabili booleane (la prima sottoforma di intero e la seconda sottoforma di stringa)
    printf("flag1: %d", flag1);
    printf("\nflag2: %s", flag2 ? "è vero" : "è falso");

    return 0;
}
