[esercitazione] operatori new e delete 

#include <bits/stdc++.h>
using namespace std;

// Alloca dinamicamente memoria per un float corrispondente.
float *pointer_to_float = new float;

// Assegna il valore 3.14 al memoria allocata.
*pointer_to_float = 3.14;

// Stampa il valore della memoria allocata.
cout << "The value stored in pointer_to_float is: " << *pointer_to_float << endl;

// Dealloca la memoria corrispondente.
delete pointer_to_float;
int *pointer_to_int;

float *pointer_to_float;

pointer_to_int = new int;
*pointer_to_int = 314;
cout << "The value stored in pointer_to_int is: " << *pointer_to_int << endl;

delete pointer_to_int;

pointer_to_int = new int(101);
cout << "The value stored in pointer_to_int is: " << *pointer_to_int << endl;
delete pointer_to_int;

pointer_to_float = new float[3];
pointer_to_float[0] = 2.02;
pointer_to_float[1] = 3.03;
pointer_to_float[2] = 4.04;

for (int i = 0; i < 3; i++) {
    cout << "Element at index[" << i << "] is: " << pointer_to_float[i] << endl;
}
delete[] pointer_to_float;
