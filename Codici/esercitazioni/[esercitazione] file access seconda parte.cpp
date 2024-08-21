[esercitazione] file access seconda parte

#include <stdio.h>

int main() {
    int n_file_aprire;
    char percorso_al_file[200];
    char contenuto _da_scrivere_su_file[200];

    printf("Inserisci il percorso al file da aprire:\n");
    gets(percorso_al_file);
    printf("Percorso inserito: %s", percorso_al_file);

    FILE *file_da_aprire = fopen(percorso_al_file, "r");

    if(file_da_aprire)
        printf("File aperto con successo.\n");
    else
        printf("Errore nell'apertura del file.\n");

     fprintf(file_da_aprire, "%s", contenuto_da_scrivere_su_file);
     printf("\n\Contenuto scritto sul file:\n%s", contenuto_da_scrivere_su_file);


    fclose(file_da_aprire);

    return 0;
}
