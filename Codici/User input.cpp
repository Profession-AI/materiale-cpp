User input.cpp

#include <iostream>

int main() {
    char parola_digitata[50];
    int eta;

    std::cout << "\nDigita una parola: ";
    std::cin >> parola_digitata;

    std::cout << "\nLa parola digitata è: " << parola_digitata;

    std::cout << "\n\nDigita la tua età: ";
    std::cin >> eta;

    std::cout << "\nLa tua età è: " << eta;

    return 0;

}



#include <iostream>

int main() {
    char parola_digitata[50];
    int eta;

    std::cout << "\nCatturo l'input digitato da tastiera con la funzione gets: ";
    gets(parola_digitata);

    std::cout << "\nHai digitato: " << parola_digitata;

    return 0;
}
