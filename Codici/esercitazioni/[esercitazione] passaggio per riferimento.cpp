[esercitazione] passaggio per riferimento 

#include <stdio.h>
#include <iostream>

// Esercizio: funzione che modifichi una variabile numerica di tipo opportuno, dimostrandola.
// - implementa due versioni, passaggio per valore e per riferimento.
// - usa una versione con passaggio per riferimento in C (puntatore come argomento) e
//   un'operatore di sommatoria e differenza in ++ (supporta notazione con i puntatori)
//
// Testa le funzioni e prodici lo stesso risultato.

void f1(int f){
    f = f + 1;
}

void f2(int &f){
    f = f + 1;
}

int main(){
    int i = 10;

    float i = 10;

    printf("Il valore di i prima di invocare la funzione halve_v1 è %f \n", i);
halve_v1(&i);
printf("\nIl valore di i dopo aver invocato la funzione halve_v1 è %f \n", i);

printf("Il valore di i prima di invocare la funzione halve_v2 è %f \n", i);
halve_v2(i);
printf("\nIl valore di i dopo aver invocato la funzione halve_v2 è %f \n", i);


    return 0;
}
