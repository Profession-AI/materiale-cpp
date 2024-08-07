file access.cpp

#include <stdio.h>

int main() {
    FILE *file;
    char* percorso_al_file = "file.txt";

    file = fopen(percorso_al_file, "r");

    if (file == NULL) {
        printf("Impossibile aprire il file al percorso: %s. Programma terminato.", percorso_al_file);
        return 0;
    }

    printf("File aperto con successo.");

    return 0;
}
