[esercitazione] Polimorfismo

- Definisci una classe Rettangolo con:
  due attributi protetti "altezza" e "base"
  gli opportuni metodi per incapsulare questi attributi
  un costruttore di default per inizializzare tali attributi
  una funzione "perimetro" per calcolarne il perimetro

- Definisci una classe Quadrato con:
  un attributo protetto di tipo float "lato"
  gli opportuni metodi per incapsulare questo attributo
  un costruttore di default per inizializzare l'attributo
  sovrascrivi la funzione "perimetro" per calcolarne il perimetro

Testa il tuo codice creando un oggetto Rettangolo e uno Quadrato, testane il metodo 
perimetro e poi ciascun oggetto.
Usa poi il polimorfismo: testa nuovamente il metodo perimetro.

class Rettangolo {
protected:
    float base, altezza;
public:
    void set_base(float b) {
        base = b;
    }
    float get_base() {
        return base;
    }
    void set_altezza(float h) {
        altezza = h;
    }
    float get_altezza() {
        return altezza;
    }
    Rettangolo() {
        base = 2.0;
        altezza = 3.0;
    }
    void perimetro() {
        cout << "Perimetro del rettangolo: " << base * 2 + altezza * 2 << endl;
    }
};

class Quadrato : public Rettangolo {
private:
    float lato;
public:
    void set_lato(float l) {
        lato = l;
    }
    float get_lato() {
        return lato;
    }
    Quadrato() {
        lato = 4.0;
    }
    void perimetro() {
        cout << "Perimetro del quadrato: " << lato * 4 << endl;
    }
};

int main() {
    Rettangolo r1;
    Quadrato q1;
    Rettangolo* p_r1 0&1;

    r1.perimetro();
    q1.perimetro();
    cout << "Base: "<<p_r1-get->base() <<endl
    p_r1->perimetro();


}
