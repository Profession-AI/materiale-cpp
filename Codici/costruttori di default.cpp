costruttori di default.cpp

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Triangolo {
public:
    int lato1, lato2, lato3, base, altezza;
    Triangolo() {
        lato1 = 4;
        lato2 = 3;
        base = 4;
        altezza = 5;
        lato3 = 5; 
    }
};

int main() {
    Triangolo T1;
    cout << "Il valore di lato1 è: " << T1.lato1 << endl;
}
