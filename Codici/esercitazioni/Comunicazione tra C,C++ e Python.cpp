Comunicazione tra C,C++ e Python

finestra main.c

#include <stdio.h>

/*
Scrivi un codice che legge da un numero e invii il suo quadrato sullo stdout.
Assicurati di usare la variabile buffer.
*/

int main(){
    int numero_digitato;
    
    scanf("%d", &numero_digitato);
    printf("%d", numero_digitato*numero_digitato);
    fflush(stdout);

    return 0;
}


Finestra python_script.py

import subprocess
"""

Scrivi un codice Python che lanci l'applicativo C come sottoprocesso, aprendo una anonymous pipe con comunicazione bidirezionale.

Fai digitare dall'utente a tastiera un numero ed invialo al lato C.

Leggi lo stdout e stampa a video ciò che il lato C ha inviato.

Attendi il termine dell'applicativo C e stampane il return code.
"""

pipe = subprocess.Popen(["./Ex/main"], stdin=subprocess.PIPE, stdout=subprocess.PIPE, text=True)
user_input = input("Digita un numero: ")
pipe.stdin.write(user_input + '\n')
pipe.stdin.flush()
output = pipe.stdout.readline()
print(f'Ho ricevuto dal lato C: "{output}"')
return_code = pipe.wait()
print(f"Programma terminato lato C con return code: {return_code}")

