[esercitazione] Puntatori

int main(){

    int numero_di_dalmata = 2;
    int *puntatore_a_numero_di_dalmata;
    puntatore_a_numero_di_dalmata = &numero_di_dalmata;

    printf("Il valore di numero di dalmata è %d", puntatore_a_numero_di_dalmata);

    *puntatore_a_numero_di_dalmata = *puntatore_a_numero_di_dalmata + 99;

    printf("Il valore di numero di dalmata è %d", *puntatore_a_numero_di_dalmata);

    return 0;
}


int main(){

    int numero_di_dalmata = 2;
    int *puntatore_a_numero_di_dalmata;
    puntatore_a_numero_di_dalmata = &numero_di_dalmata;

    printf("Il valore di numero di dalmata è %d", *puntatore_a_numero_di_dalmata);

    *puntatore_a_numero_di_dalmata = *puntatore_a_numero_di_dalmata + 99;

    printf("Il valore di numero di dalmata è %d", *puntatore_a_numero_di_dalmata);

    return 0;
}
