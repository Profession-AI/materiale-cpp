Operatori new e delete.cpp

#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("data.txt");

    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cout << "Error opening file" << std::endl;
    }

    return 0;
}
