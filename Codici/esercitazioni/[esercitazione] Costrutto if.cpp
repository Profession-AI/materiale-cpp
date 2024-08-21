[esercitazione] Costrutto if

int main() {
    // Definire una variabile intera dal valore arbitrario
    int num = 6;

    if(num % 2 == 0) {
        printf("La variabile è multiplo di 2.\n");
    }

    if(num % 3 == 0) {
        printf("La variabile è multiplo di 3.\n");
    }

    if(num > 0) {
        printf("La variabile è positiva.\n");
    }

    return 0;
}
