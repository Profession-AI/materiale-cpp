[esercitazione] struct

#include <stdio.h>
#include <string.h>

// Definisci una struct per poter salvare i dati dei libri.
struct Libro {
    char titolo[50];
    int numero_di_pagine;
    int anno_di_pubblicazione;
    char genere[20];
};

int main() {
    // Crea due variabili con due libri a scelta

    // Inizializza alcuni campi di questi libri
    struct Libro libro1, libro2;
    
    strcpy(libro1.titolo, "Il Codice Da Vinci");
    libro1.numero_di_pagine = 689;
    libro1.anno_di_pubblicazione = 2003;

    strcpy(libro2.titolo, "Lo strano caso del Dr Jekyll e Mister Hyde");
    libro2.numero_di_pagine = 188;
}


