[esercitazione] Distruttori

- due attributi float: base e altezza
- crea una classe Rettangolo che contiene:
  - due attributi float: base e altezza
  - un costruttore che stampa il messaggio "Oggetto di tipo Rettangolo distrutto con successo."
- un costruttore di default
Stampa il valore degli attributi.
Per il secondo punto il primo costruttore deve restituire i valori degli attributi pari a 5 e 10 se non specificato altrimenti.

Testa i tuoi codici creando degli oggetti.

class Rettangolo{
    public:
    float base, altezza;
    Rettangolo(){
        base = 5.0;
        altezza = 10.0;
    }
    Rettangolo(float _base, float _altezza){
        base = _base;
        altezza = _altezza;
    }
    ~Rettangolo(){
        cout << "Oggetto di tipo Rettangolo distrutto con successo." << endl;

    }

}

int main() {
    Rettangolo r1;
    Rettangolo r2(8.0, 9.5);

    cout << "r1: Il valore di base è: " << r1.base << endl;
    cout << "r1: Il valore di altezza è: " << r1.altezza << endl;

    cout << "r2: Il valore di base è: " << r2.base << endl;
    cout << "r2: Il valore di altezza è: " << r2.altezza << endl;
}



