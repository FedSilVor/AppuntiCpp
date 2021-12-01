//Copyright: FedSilVor 2021
#include <iostream>
using namespace std;

//Sto dichiarando tutte le mie funzioni, in alternativa potevo direttamente scrivere qui le funzioni.

//NOTA: Possiamo creare funzioni void che non tornerà nessun valore, oppure qualsiasi altra funzione che tornerà un certo tipo di valore. Come ad esempio int, double, string ed ecc...

void Null();
int NumeroFun(int NumeroFunzione); //anche qui devo dichiarare le variabili (leggi riga 31).
double Cubo(double Cubo);

int main(){
    
    int Numero = 5; //questa variabile può essere cambiata per testare il programma.
    
    Null(); //Possiamo chiamare la funzione per eseguire il codice al suo interno, ma non manderà nulla in cambio a main.

    cout << Numero << " + 10 = " << NumeroFun(Numero) << endl; //Posso utilizzare la funzione per printare direttamente il ritorno. Nelle parentesi ho messo la variabile da includere nella funzione.

    cout << "45 + 10 = " << NumeroFun(45) << endl; //Stessa cosa qui, ma invece di inserire la variabile Numero ho inserito direttamente un valore int (ovvero un numero intero).

    //Così facendo possiamo fare una funzione che calcolerà il cubo di un determinato numero.

    double Numero2 = 7; //questa variabile può essere cambiata per testare il programma.
    
    cout << Numero2 << " Elevato al cubo = " << Cubo(Numero2) << endl;

    cout << Numero << " Elevato al cubo = " << Cubo(Numero) << endl; //posso metterci anche un valore int.

    cout << "6 Elevato al cubo = " << Cubo(6) << endl;

    return 0;
}

void Null(){ //Quando la funzione è void, non ritornerà nessun valore. Eseguirà il codice e basta. Infatti non potremo mandare il risultato nel main neanche volendo.

    int Risultato = 1 + 1;

    cout << Risultato << endl;

}

int NumeroFun(int NumeroFunzione){ //Qualsiasi valore int verrà aggiunto alla funzione, verrà messo in questa variabile di nome NumeroFunzione.

    return NumeroFunzione + 10; //Facendo così, qualsiasi sia il valore di NumeroFunzione, verrà addizionato a 10.

}

double Cubo(double Cubo){ //posso metterci anche un valore int.

    return Cubo * Cubo * Cubo; //sto elevando il valore di cubo alla terza.
}