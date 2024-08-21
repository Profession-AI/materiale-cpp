[esrcitazione] Tipi di dato Float e Double


#include <stdio.h>

int main(){
    // Definisci una variabile di tipo float e assegnale il valore 13.5
    float val1 = 13.5;

    // Definisci una variabile di tipo double e assegnale il valore 133.577
    double val2 = 133.577;

    // Visualizza questi valori con due cifre decimali
    printf("val1 = %.2f - val2 = %.2f", val1, val2);

    // Definisco pi greco float con una risoluzione minore rispetto al double
    float pi_float = 3.14159265358979323846;
    
    float piGreco_f = 3.14159265358979323846;
double piGreco_d = 3.14159265358979323846;

printf("\nStampa di variabili con la risoluzione standard (6 cifre decimali):\n");
printf("piGreco_f = %f\t piGreco_d = %lf\n", piGreco_f, piGreco_d);

printf("\nStampa le variabili con la risoluzione di 3 cifre decimali:\n");
printf("piGreco_f = %.3f\t piGreco_d = %.3lf\n", piGreco_f, piGreco_d);

printf("\nStampa le variabili con la risoluzione di 10 cifre decimali:\n");
printf("piGreco_f = %.10f\t piGreco_d = %.10lf\n", piGreco_f, piGreco_d);

