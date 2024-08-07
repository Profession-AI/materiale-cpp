classi.cpp

#include <iostream>
#include <string>

class User {
public:
    std::string name;
    std::string surname;
    int ID;
};

int main() {
    User u1;
    u1.name = "John"; // Inserisci il nome desiderato
    u1.surname = "Doe"; // Inserisci il cognome desiderato
    u1.ID = 12345; // Inserisci l'ID desiderato

    std::cout << "Nome: " << u1.name << std::endl;

    return 0;
}
