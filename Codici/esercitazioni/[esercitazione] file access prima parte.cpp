[esercitazione] file access prima parte

#include <stdio.h>

int main() {
    char percorso_al_file[200];
    FILE *file_da_aprire;
    int numero_di_riga = 1;

    printf("Inserisci il percorso al file:\n");
    gets(percorso_al_file);

    file_da_aprire = fopen(percorso_al_file, "r");

    while(fgets(riga_letta, sizeof(riga_letta), file_da_aprire) != NULL) {
        printf("Riga %d: %s", numero_di_riga, riga_letta);
        numero_di_riga++;
    }

    return 0;
}


    fclose(file_da_aprire);

