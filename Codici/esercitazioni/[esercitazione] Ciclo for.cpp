[esercitazione] Ciclo for 

#include <iostream>
using namespace std;

// Definisci un ciclo for per potere contare tutti i multipli di 3 da 3 fino a 30 e salvi il numero dei tali multipli.
// Dopo aver definito un array di una dimensione opportuna, definisci un secondo ciclo for dove ad ogni turno cerchi il numero salvato dal ciclo precedente.
// Infine, stampa video questi vettori stampando all'array e solo i elementi non vuoti.
// Se salvi classico: di 11 questo permette di classificare tutti gli stampati in ordine dal più piccolo al più grande

int main() {

    // Variabili
    int multipli[10]; // Contiene i numeri di multipli
    int counter = 0; // Contatore per contare tutti i multipli di 3 da 3 fino a 30

    // Definire un ciclo for
    for (int counter = 3; counter <= 30; counter++) {
        if (counter % 3 == 0) {
            multipli[counter / 3 - 1] = counter;
        }
    }

    // Stampa i multipli
    for (int i = 0; i < 10; i++) {
        cout << multipli[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int multipli = 0;
    int array_di_multipli[10];

    printf("\nI multipli di 3 da 3 fino a 30 sono: %d", multipli);

    for (int counter = 3; counter < 30; counter++) {
        if (counter % 3 == 0) {
            array_di_multipli[multipli] = counter;
            multipli++;
            printf("\nElemento in indice %d vale: %d", multipli, array_di_multipli[multipli]);
        }
    }

    return 0;
}
