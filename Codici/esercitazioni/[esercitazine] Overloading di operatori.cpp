[esercitazine] Overloading di operatori

Definisci una classe astratta Shape con solo il metodo "area".
Definisci una classe "Rectangle" con:
- due attributi pubblici di tipo float chiamati "base" and "height"
- un costruttore di default per inizializzare tali attributi
- un overriding di funzione su "area" che calcoli l'area del rettangolo
- un overloading dell'operatore + per produrre la somma delle aree

Testa il tuo codice creando due oggetti Rectangle, calcolandone singolarmente le aree e poi usando l'operatore + calcolane la somma delle aree.
*/

class Shape {
public:
    virtual float area() = 0;
};

class Rectangle : public Shape {
public:
    float base, height;
    Rectangle() {
        base = 4.0;
        height = 5.0;
    }

    float area() override {
        return base * height;
    }
float operator*(Rectangle& r1) {
    return area() + r1.area();
}

int main() {
    Rectangle r1, r2;
    cout << "Area di r1: " << r1.area() << endl;
    cout << "Area di r2: " << r2.area() << endl;
    cout << "Somma di area di r1 e area di r2: " << r1 * r2 << endl;
}

