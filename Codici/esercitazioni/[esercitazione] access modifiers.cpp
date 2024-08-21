[esercitazione] access modifiers

Crea una classe User con:
- nickname : attributo di tipo string
- email : attributo bool
- premium : attributo bool
- password : attributo di tipo string

Costruisci gli attributi permettendo di specificare tutti gli attributi precedenti

Specifica che gli attributi nome e solo nickname siano visibili all'esterno della classe

Specifica in modo il modo in cui sono accessibili email e password.

Fai in modo di poter cambiare gli attributi email e password della classe.

Testa il tuo codice creando un utente e specificando gli attributi.

Verifica che solo l'attributo nickname sia accessibile dall'esterno della classe.

Cambia gli altri attributi email e password.



class User {
private:
    bool premium;
    string nickname, email, password;

public:
    User(string _nickname, bool _premium, string _email, string _password) {
        nickname = _nickname;
        premium = _premium;
        email = _email;
        password = _password;
    }

    string get_email() {
        return email;
    }

    void set_email(string _email) {
        email = _email;
    }

    string get_password() {
        return password;
    }

    void set_password(string _password) {
        password = _password;
    }
};

int main() {
    User u1("Joker", true, "joker123@gmail.com", "whysoserious");
    cout << "u1: nickname -> " << u1.nickname << endl;
    cout << "u1: email -> " << u1.get_email() << endl;
    u1.set_email("joker321@gmail.com");
    cout << "u1: email -> " << u1.get_email() << endl;
}









