tipi di dato char.cpp 
PRIMA PARTE

#include <stdio.h>

int main() {
    // Definisci due variabili: un float dal valore di 13.5
    float val1 = 13.5;

    // un double dal valore di 133.577
    double val2 = 133.577;

    // Visualizza questi valori con due cifre decimali
    printf("val1 - %.2f --- val2 - %.2f", val1, val2);

    // Dimostra che i float hanno una risoluzione minore rispetto ai double
    // definendo il pigreco fino a 20 cifre decimali [3.14159265358979323846]
    return 0;
}



SECONDA PARTE DI CODICE 



#include <stdio.h>

int main() {
    double val1 = 3.14159265358979323846;
    float val2 = 3.14159265358979323846;

    // Visualizza questi valori con due cifre decimali
    printf("val1 = %.2f  val2 = %.2f\n", val1, val2);

    // Dimostra che il float ha una risoluzione minore rispetto al double
    float pigreco_f = 3.14159265358979323846;
    double pigreco_d = 3.14159265358979323846;

    // Stampa i valori con la risoluzione standard (6 cifre decimali):
    printf("\npigreco_f = %.6f\n", pigreco_f);
    
    // Stampa i valori con la risoluzione standard:
    printf("\npigreco_d = %.16lf\n", pigreco_d);

    return 0;
}
