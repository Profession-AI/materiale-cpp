Operatori di paragone.cpp

#include <stdio.h>

int main() {
    int a = 3, b = 4;
    int uguaglianza = a == b;
    std::cout << "La variabile uguaglianza contiene " << uguaglianza << std::endl;

    int disuguaglianza = a != b;
    std::cout << "La variabile disuguaglianza contiene " << disuguaglianza << std::endl;

    a = b + 2;
    int maggiore_stretta = a > b;
    std::cout << "La variabile maggiore_stretta contiene " << maggiore_stretta << std::endl;

    int maggioranza = a >= b;
    std::cout << "La variabile maggioranza contiene " << maggioranza << std::endl;

    return 0;
}
