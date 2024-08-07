Contenitori stringhe.cpp

#include <stdio.h>
#include <string.h>

int main() {
    char c[10];
    
    c[0] = 'C';
    c[1] = 'i';
    c[2] = 'a';
    c[3] = 'o';

    printf("c contiene: %s\n", c);
    
    printf("\nlunghezza dell'array c: %zu", sizeof(c) / sizeof(c[0]));

    return 0;

    char c2[] = "Mondo!";
    
    printf("La stringa c2 vale: %s\n", c2);
    printf("Lunghezza della stringa in c2: %d\n", strlen(c2));
    printf("Lunghezza dell'array c2: %zu\n", sizeof(c2) / sizeof(c2[0]));

