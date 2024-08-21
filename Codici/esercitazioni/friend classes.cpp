friend classes.cpp

Definisci una classe Rettangolo con:
- due attributi privati "lato_base" e "lato_altezza"
- un metodo pubblico "calcola_perimetro" che calcoli il perimetro del rettangolo
- un metodo pubblico "calcola_area" che calcoli l'area del rettangolo

Definisci una classe TriangoloIsoscele con:
- due attributi privati "lato_obliquo" e "base"
- un metodo pubblico "calcola_perimetro" che calcoli il perimetro del triangolo
- un metodo pubblico "calcola_area" che calcoli l'area del triangolo

Definisci inoltre i default dei costruttori dei tuoi attributi

Definisci infine una classe Sommatore con:
- due attributi interni per immagazzinare l'area totale
- un metodo "aggiungi_area_rettangolo" che prenda come input i lati di un rettangolo e aggiunga la sua area all'area totale della figura passata in input
- un metodo "aggiungi_area_triangolo_isoscele" che prenda come input i lati di un triangolo isoscele e aggiunga la sua area all'area totale della figura passata in input

Testa il tuo codice creando un oggetto Sommatore, gli oggetti di TriangoloIsoscele ed oggetto Rettangolo. Invoca i metodi degli oggetti per stamparne gli attributi.

class Rettangolo {
private:
    float base, altezza;

public:
    float calcolo_perimetro() {
        return (base * 2) + (altezza * 2);
    }

    float calcolo_area() {
        return base * altezza;
    }
     
    public:
        friend class Sommatore;

    Rettangolo() {
        base = 2.0;
        altezza = 3.0;
    }
};

class TriangoloIsoscele {
private:
    float latoisoscele, base, altezza;
    float calcolo_perimetro() {
        return (latoisoscele * 2) + base;
        }

        float calcolo_area() {
        return base * altezza / 2;
    }


 public:

     friend class Sommatore;

     TriangoloIsoscele() {
        latoisoscele = 3;
        base = 2.0;
        altezza = 3.0;
    }
};

class Sommatore {
    float perimetro_totale, area_totale;

public:
    void aggiorna_perimetro(Rettangolo r) {
        perimetro_totale += r.calcolo_perimetro();
    }

    void aggiorna_area(Rettangolo r) {
        area_totale += r.calcolo_area();
    }

void aggiorna_perimetro(TriangoloIsoscele i) {
    perimetro_totale += i.calcolo_perimetro();
}

void aggiorna_area(TriangoloIsoscele i) {
    area_totale += i.calcolo_area();
}

Sommatore() {
    perimetro_totale = 0.0;
    area_totale = 0.0;
};

int main() {
    TriangoloIsoscele t1;
    Rettangolo r1;
    Sommatore s1;

    s1.aggiorna_area(t1);
    s1.aggiorna_perimetro(t1);

    cout << "s1: area totale --> " << s1.area_totale << endl;
    cout << "s1: perimetro totale --> " << s1.perimetro_totale << endl;

    s1.aggiorna_area(r1);
    s1.aggiorna_perimetro(r1);

    cout << "s1: area totale --> " << s1.area_totale << endl;
    cout << "s1: perimetro totale --> " << s1.perimetro_totale << endl;

    return 0;
}

