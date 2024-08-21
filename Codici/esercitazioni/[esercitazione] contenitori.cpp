[esercitazione] contenitori

#include <string.h>

int main(){
    // Definire un array di char lungo 3
    char array_di_char[3];
    
    // Definire una stringa di lunghezza 3
    char stringa[] = "Wow";
    
    // Stampare la lunghezza del primo array con sizeof
    printf("array_di_char è lungo %zu", sizeof(array_di_char)/sizeof(array_di_char[0]));
    
    // Stampare la lunghezza della stringa contenuta nel primo array
    printf("\nla lunghezza della stringa in array_di_char è %d", strlen(array_di_char));
    
    // Stampare la lunghezza della stringa con sizeof
    printf("\nstringa è lungo %zu", sizeof(stringa)/sizeof(stringa[0]));
    
    // Stampare la lunghezza della stringa con il metodo appropriato
    printf("\nla lunghezza della stringa 'stringa' è %d", strlen(stringa));
    
// Crea e inizializza un array one-shot utilizzando la sinassi
// Char nome_array[] = {valore1, valore2, …, valoreN};
char arra_diChar2[] = {'W','o','w',\0'};

    return 0;
}
