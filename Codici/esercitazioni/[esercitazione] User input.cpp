[esercitazione] User input

#include <string.h>
#include <stdio.h>

int lunghezza_input_dato();

int main() {
    char scelta;
    int lunghezza;

    printf("Vuoi digitare una singola parola o una frase? [p-parola/f-frase]: ");
    scanf("%c", &scelta);

    if(scelta == 'p'){
        printf("\nDigita la parola: ");
        lunghezza = lunghezza_input_dato();
        if(lunghezza > 1)
            printf("\n%s è una frase.", ...); // Testo tagliato nell'immagine
        else
            printf("\n%s è una parola.", ...); // Testo tagliato nell'immagine
    }
    else if(scelta == 'f'){
        printf("\nDigita la frase: ");
        ...
        ...
        ...
    }
    else{
        printf("\nScelta non corretta. Programma terminato.");
    }

    return 0;
}

     return strlen(input-digitato);
}

int main() {
    printf("Invoco la funzione lunghezza_input_digitato: ");
    printf("\nLa lunghezza di ciò che hai digitato è %d", lunghezza_input_digitato());

    return 0;
}





