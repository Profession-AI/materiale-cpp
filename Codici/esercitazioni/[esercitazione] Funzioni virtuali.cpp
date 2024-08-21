[esercitazione] Funzioni virtuali

- Definisci una classe Triangolo con:
  - tre attributi pubblici di tipo float: "lato1", "lato2", "lato3"
  - un costruttore di default per inizializzare i tre attributi
  - un metodo 'perimetro' per calcolare il perimetro del triangolo

Definisci una classe TriangoloEquilatero che eredita da Triangolo e con:
  - un attributo pubblico di tipo float "lato"
  - un costruttore di default, una nuova definizione del metodo 'perimetro'
    sfruttando l'overide, per definire il perimetro tale "perimetro"

Testa il tuo codice usando il polimorfismo e dimostra che se il metodo 'perimetro' di Triangolo
viene dichiarato virtuale, il "problema del polimorfismo" non esiste per tale metodo.

class Triangolo {
public:
    float lato1, lato2, lato3;

    Triangolo() {
        lato1 = 3.0;
        lato2 = 4.0;
        lato3 = 5.0;
    }

    float perimetro() {
        cout << "Invoco il metodo perimetro della classe Triangolo" << endl;
        return lato1 + lato2 + lato3;
    }
};

class TriangoloEquilatero : public Triangolo {
public:
    float lato;

    TriangoloEquilatero() {
        lato = 5.0;
    }

    float perimetro() {
        cout << "Invoco il metodo perimetro della classe TriangoloEquilatero" << endl;
        return lato * 3;
    }
};

int main() {
    Triangolo t1;
    TriangoloEquilatero e1;
    Triangolo* p_t1 = &e1;

    cout << "Perimetro di t1: " << t1.perimetro() << endl;
    cout << "Perimetro di e1: " << e1.perimetro() << endl;
    cout << "Perimetro di e1 (tramite polimorfismo): " << p_t1->perimetro() << endl;

    return 0;
}
