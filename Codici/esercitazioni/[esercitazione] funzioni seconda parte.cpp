[esercitazione] funzioni seconda parte

#include <stdio.h>

// Definisci una funzione per l'elevamento a potenza. La funzione deve:
// - avere come parametri di input una base (float) ed un esponente (int)
// - calcolare la potenza come 1.0 se l'esponente è zero
// - calcolare la potenza come prodotto della base per se stessa un numero di volte pari all'esponente se l'esponente è maggiore di zero
// - calcolare la potenza come 1/(prodotto della base per se stessa un numero di volte pari all'esponente) se l'esponente è minore
// - restituire la potenza così calcolata
float potenza(float base, int esponente) {
    if (esponente == 0) {
        return 1.0;
    } else if (esponente > 0) {
        float risultato = 1.0;
        for (int i = 0; i < esponente; i++) {
            risultato *= base;
        }
        return risultato;
    } else {
        float risultato = 1.0;
        for (int i = 0; i < -esponente; i++) {
            risultato /= base;
        }
        return risultato;
    }
}

int main() {
    float base = 2.0;
    int esponente = 3;
    printf("Il risultato di %.2f elevato a %d è %.2f\n", base, esponente, potenza(base, esponente));
    return 0;
}


