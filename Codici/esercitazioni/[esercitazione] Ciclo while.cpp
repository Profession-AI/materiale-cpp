[esercitazione] Ciclo while


// Definisci un ciclo while che raddoppi e stampi un numero intero arbitrario
// fino ad arrivare ad un multiplo di 17 (escluso) o oltre la soglia di 1000

#include <iostream>
using namespace std;

int main() {
    // Definisci un numero intero arbitrario
    int num = 10;
    
    // Esegui il ciclo while
    while (num < 1000 && (num % 17 != 0)) {
        num *= 2;
        cout << "Il numero corrente è: " << num << endl;
    }
    
    // Il ciclo termina quando il numero è un multiplo di 17 o superiore al prossimo multiplo di 5
    
    return 0;
}
