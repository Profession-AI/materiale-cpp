[esercitazione] ereditarietà

Definisci una classe MezzoDiTrasporto con:
- un attributo string "tipo_di_motore"
- un attributo float "velocita"
- un costruttore di default che imposta la velocità a 0.0

Definisci poi la classe "Aereo" derivata da MezzoDiTrasporto con:
- un costruttore di default che imposta "tipo_di_motore" a "propulsione" e la velocità a 0.0
- i metodi setter e getter per "velocita"

Definisci infine la classe "Motociclo" derivata da MezzoDiTrasporto con ereditarietà pubblica:
- un costruttore di default che imposta "tipo_di_motore" a "combustione interna" e la velocità a 0.0

Testa il tuo codice creando un oggetto Aereo ed un oggetto Motociclo e cambia la velocità dei due oggetti.

int main(){

class MezzoDiTrasporto {
public:
    string tipo_di_motore;
    float velocita;
    MezzoDiTrasporto() {
        tipo_di_motore = "";
        velocita = 0.0;
    }
};

class Aereo : MezzoDiTrasporto {
public:
    Aereo() {
        tipo_di_motore = "propulsione";
        velocita = 0.0;
    }
    void setta_velocita(float _velocita) {
        velocita = _velocita;
    }
    
    float get_velocita() {
        return velocita;
    }
};

int main() {
    Aereo a1;
    Motociclo m1;

    cout << "a1: velocita' -> " << a1.getter_velocita() << endl;
    cout << "m1: velocita' -> " << m1.velocita << endl;

    a1.setter_velocita(45);

    cout << "a1: velocita' -> " << a1.getter_velocita() << endl;
    cout << "m1: velocita' -> " << m1.velocita << endl;
}

