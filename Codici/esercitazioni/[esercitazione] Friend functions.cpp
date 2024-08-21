[esercitazione] Friend functions

- Definisci una classe Car con:
  - un attributo privato booleano "engine_on" settato low
  - un attributo pubblico booleano "brake_inserted"
- Costruisci un default che inizializzi tali attributi

- Definisci una classe Boat con:
  - un attributo privato booleano "engine_level"
  - un attributo pubblico booleano "anchor_released"
- Costruisci un default che inizializzi tali attributi

- Definisci una funzione ready_to_move che:
  - possa accedere a tutti gli attributi di Car e gli attributi "engine_level" e "brake_inserted" siano settati true, invece a passando un oggetto Boat, gli attributi "fuel_level_low" & "anchor_released" siano entrambi false se invocati su un oggetto Boat ritorni false
- Estendi tali codice facendo una funzione per ogni tipo di Car e per ogni tipo di Boat

*/

class Car {
private:
    bool engine_oil_level_low;

public:
    bool brake_inserted;

    Car() {
        engine_oil_level_low = false;
        brake_inserted = true;
    }
};

class Boat {
private:
    bool fuel_level_low;

public:
    bool anchor_released;

    Boat() {
        fuel_level_low = false;
        anchor_released = true;
    }
};

friend bool ready_to_move(Boat b);

bool ready_to_move(Car c) {
    if ((c.brake_inserted == false) && (c.engine_oil_level_low == false)) {
        return true;
    } else {
        return false;
    }
}

bool ready_to_move(Boat b) {
    if ((b.anchor_released == false) && (b.fuel_level_low == false)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Car c1;
    Boat b1;

    cout << "Invoco la funzione ready_to_move(c1): " << ready_to_move(c1) << endl;
    cout << "Invoco la funzione ready_to_move(b1): " << ready_to_move(b1) << endl;
}

