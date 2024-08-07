costruttori specifici.cpp

#include <iostream>
using namespace std;

class Triangolo {
private:
    int lato1, lato2, lato3, base, altezza;
public:
    Triangolo(int _lato1, int _lato2, int _lato3, int _base, int _altezza) {
        lato1 = _lato1;
        lato2 = _lato2;
        lato3 = _lato3;
        base = _base;
        altezza = _altezza;
    }
};

int main() {
    Triangolo t1(3, 4, 5, 4, 5);
    cout << "Il valore di lato2 è: " << t1.lato2 << endl;
}
