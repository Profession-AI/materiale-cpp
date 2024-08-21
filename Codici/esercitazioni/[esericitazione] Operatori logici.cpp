[esericitazione] Operatori logici 

#include <stdio.h>

int main(){
    // Definisci tre variabili intere con valori arbitrari
    int a = 2, b = 4, c = 6;

    // Stampa il messaggio "a è maggiore di b e multiplo di c" se la condizione è vera
    if((a > b) && (a % c == 0)){
        printf("a è maggiore di b e multiplo di c");
    }

    // Stampa il messaggio "a è diverso da almeno una delle altre variabili" se la condizione è
    if(a != b || a != c){
        printf("a è diverso da almeno una delle altre variabili");
    }

    return 0;
}
