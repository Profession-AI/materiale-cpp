break and continue.cpp

#include <iostream>

int main() {
    int countdown = 10;

    while (countdown > 0) {
        std::cout << countdown << std::endl;
        countdown--;
    }

    std::cout << "Buon Anno!" << std::endl;

    return 0;
}

