[esercitazione] argomenti di default

#include <bits/stdc++.h>
using namespace std;

// definizione di funzione
La funzione deve:
- calcolare il peso come il prodotto dei due argomenti input (massa * accelerazione_di_gravita)
- restituire 1 se il calcolo è corretto
- prevedere l'accelerazione di gravita come argomento di default, del valore di 9.81.

Testa la funzione invocandola con uno o due argomenti.

float calcola_peso(float massa, float accelerazione_di_gravita = 9.81){
    return massa * accelerazione_di_gravita;
}

int main(){


float calcolo_peso(float massa, float accelerazione_di_gravita = 9.81){
    return massa * accelerazione_di_gravita;
}

int main(){
    float m1 = 12.5;
    float g1 = 10.1;

    cout << "Il peso calcolato da una massa di " << m1 
         << " e accelerazione di gravità di " << g1 
         << " è: " << calcolo_peso(m1, g1) << endl;

    cout << "Il peso calcolato da una massa di " << m1 
         << " e una accelerazione di gravità pari a quella di default (9.81)"
         << " è: "<< calcolo_peso(m1) << endl;
}

