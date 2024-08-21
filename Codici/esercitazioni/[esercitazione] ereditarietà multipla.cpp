[esercitazione] ereditarietà multipla 

#include <bits/stdc++.h>
using namespace std;

Definisci la classe VeicoloTerreno con:
- un attributo "accelera_route"
- una funzione di default per incrementare l'attributo "accelera_route"

Definisci una seconda classe VeicoloMarino con:
- un attributo "accelera_route"
- una funzione di default per incrementare l'attributo "accelera_route"

Definisci terza classe "VeicoloAereo" con:
- un attributo "accelera_route"
- una funzione di default per incrementare l'attributo "accelera_route"

Definisci infine una classe "VeicoloIbrido" che eredita le proprietà delle classi precedenti e aggiunge:
- un attributo booleano che inizializza attiva sì/no
- una funzione di default per incrementare l'attributo "accelera_route" e attiva tutte le altre funzioni delle classi ereditate

Inserire il codice completo quando avete finito. Esempio: classe e invocazione dei rispettivi metodi.


 class VeicoloDiTerra {
protected:
    int rpm_ruote;
public:
    VeicoloDiTerra() {
        rpm_ruote = 0;
    }
    void accelera_ruote() {
        rpm_ruote++;
    }
};

class VeicoloMarino {
protected:
    int rpm_elica;
public:
    VeicoloMarino() {
        rpm_elica = 0;
    }
    void accelera_elica() {
        rpm_elica++;
    }
};

class VeicoloIbrido : VeicoloDiTerra, VeicoloMarino {
    bool elica_attivata;
    VeicoloIbrido(){
        elica attivata = false;
        rpm_elica = 0;
        rpm_ruote = 0;
     }
    class VeicoloDiTerra {
    int rpm_elica;
    int rpm_ruote;
public:
    void accelera_elica() {
        if(elica_attivata == true)
            accelera_elica();
        else
            accelera_ruote();
    }
};

int main() {
    VeicoloDiTerra t1;
    t1.accelera_elica();

    cout << "t1 rpm_elica -> " << t1.get_rpm_elica() << endl;
    cout << "t1 rpm_ruote -> " << t1.get_rpm_ruote() << endl;

    return 0;
}







