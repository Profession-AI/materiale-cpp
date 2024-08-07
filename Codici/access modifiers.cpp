access modifiers.cpp

#include <iostream>
using namespace std;

class Car {
private:
    string plate_number;
    float weight, length, width;
    int speed;
    bool engine_oil_level;
    bool fuel_level_low;
    bool brake_oil_level_low;

public:
    void set_plate_number(string _plate_number) {
        plate_number = _plate_number;
    }

    string get_plate_number() {
        return plate_number;
    }
};

int main() {
    Car c1;
    c1.weight = 2500.0;
    c1.set_plate_number("AX121CZ");
    
    cout << "The weight of the car is " << c1.weight << endl;

    cout << "The plate number of the car is " << c1.get_plate_number() << endl;
    return 0;
}
