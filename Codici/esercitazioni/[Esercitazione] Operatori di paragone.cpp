[Esercitazione] Operatori di paragone

int a = 3, b = 4;
int uguaglianza = a == b;

printf("La variabile uguaglianza contiene %d", uguaglianza);

int disuguaglianza = a != b;

printf("\nLa variabile disuguaglianza contiene %d", disuguaglianza);

a = b + 2;

int maggioranza_stretta = a > b;

printf("\nLa variabile maggioranza stretta contiene %d", maggioranza_stretta);

int maggioranza = a >= b;

printf("\nLa variabile maggioranza contiene %d", maggioranza);




#include <stdio.h>

int main(){
    // Definire due variabili float con valori arbitrari
    float f1 = 3.14, f2 = 6.00;

    // Definire due variabili per contenere la maggioranza stretta e la disuguaglianza
    int maggioranza_stretta, disuguaglianza;

    maggioranza_stretta = f1 > f2;
    disuguaglianza = f1 != f2;

    // Stampare a video queste due relazioni
    printf("La maggioranza_stretta contiene %d", maggioranza_stretta);
    printf("\nLa disuguaglianza contiene %d", disuguaglianza);

    return 0;
}
