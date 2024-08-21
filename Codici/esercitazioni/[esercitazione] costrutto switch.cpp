[esercitazione] costrutto switch

#include <stdio.h>

int main(){
    // Alla fiera dell'Est, per due soldi, un topolino mio padre comprò.
    // E venne il fuoco,
    // che bruciò il bastone,
    // che picchiò il cane,
    // che morse il gatto,
    // che si mangiò il topo,
    // che al mercato mio padre comprò.


    // Definisci con una variabile intera il punto di partenza
    int partenza = 1;

    printf("Alla fiera dell'Est, per due soldi, un topolino mio padre comprò. \nE venne il ");

    // Costruisci uno switch per replicare la canzone Alla Fiera dell'Est
    switch(partenza){
        case 1: 
            printf("il cane, \nche morse il ");
        case 0: 
            printf("gatto, \nche si mangiò il topo, \nche al mercato mio padre comprò.");
    }

    return 0;
}
