//Copyright: FedSilVor 2021
#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 5; i++){
        cout << i << endl;
    } //Funzione for normale, printerà da 1 fino a 5 in una fila verticale. Posso dichiarare la variabile anche all'interno della funzione.

    int numeri[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
                    //0, 1, 2, 3, 4,  5,  6,  7,  8,  9.
    for(int o = 0; o < 9; o++){
        cout << numeri[o] << endl;
    } //In questo caso invece ho creato una variabile array (numeri) dove andrò a printare ogni volta l'array da 0 fino a 9 (deciso da o) [ho messo minore di 10 perché non raggiungerà il 10].
}