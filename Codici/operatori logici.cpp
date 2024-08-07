operatori logici.cpp

#include <iostream>

int main() {
    int a = 2, b = 3, c = 5, d = 4;

    if (a == b && a == c) {
        std::cout << "a e b sono diversi ma a e c sono uguali." << std::endl;
    } else if (a == b && (a != c || c != d)) {
        std::cout << "a e b sono uguali ma a e c sono diversi e c e d sono uguali." << std::endl;
    }

    return 0;
}
