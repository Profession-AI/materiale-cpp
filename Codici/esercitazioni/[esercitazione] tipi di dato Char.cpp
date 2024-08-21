[esercitazione] tipi di dato Char

#include <stdio.h>

int main(){
    // Dichiarare una variabile di tipo char
    char c1;

    // Stampare il valore
    printf("Il vale %c", c1);

    // Inizializzare alla lettera z
    c1 = 'z';

    // Stampare il valore
    printf("\nc1 vale %c", c1);


int main(){
    // Dichiarare una variabile di tipo char
    char c1;

    // Stampare il valore
    printf("Il vale %c", c1);

    // Inizializzare alla lettera z
    c1 = 'z';

    // Stampare il valore
    printf("Il vale %c", c1);

    // Stamparne l'occupazione in memoria grazie alla funzione sizeof
    printf("\nc1 occupa %zu byte", sizeof(c1));

    // Dichiarare una variabile di tipo int
    int il;

    // Stampare l'occupazione in memoria della variabile int
    printf("\nil occupa %zu byte", sizeof(il));

    return 0;
}
