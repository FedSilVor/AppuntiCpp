//Copyright: FedSilVor 2021
#include <iostream>
using namespace std;

bool Frutta(); //ho dichiarato la funzione Frutta, in alternativa potevo direttamente scrivere qui la funzione.
int Maggiore(int Numero1, int Numero2);
string Uguali(int Numero1, int Numero2);

void Ternary(){ //Ora farò un esempio di operatore ternario (ternary operator).

/*Il Ternary Operator è un operatore che si può inserire direttamente nella dichiarazione della variabile o quando essa viene definita. Questo operatore è ottimo quando
abbiamo solo una condizione da definire (se funzione è vera definisce la variabile in un modo, se è falsa invece in un altro modo ancora). Funziona allo stesso modo di una
funzione if, con la differenza che viene scritta in una sola riga dal momento che definiamo una variabile. In teoria possiamo mettere più condizioni (come else if) ma diventa
scomodo sia per debuggare il codice, sia a livello di ottimizzazione. In questo caso farò un esempio di Ternary Operator con una sola condizione:*/

int Tempo = 10;
string Orario = (Tempo == 5) ? "Sono le 5" : "Non sono le 5"; //la variabile è di tipo string, ma poteva essere di qualsiasi tipo.
cout << Orario << endl; //printo il risultato.

/*La formattazione funziona così = Prima di tutto ho creato una variabile string dandogli il nome "Orario", dal momento che sono andato a definirla, ho inserito il Ternary
Operator. Le parentesi tonde è la condizione (se tale condizione è vera esegui questo, come nell'if), il punto interrogativo [?] è l'equivalente dell'if (quindi se la 
condizione è vera inserisce quel valore nella variabile) mentre invece i due punti [:] è l'else (se la condizione è falsa inserisci questo valore.
In questo caso la condizione è falsa, quindi il valore inserito sarà "Non sono le 5".*/

/*Non è consigliato usare il Ternary Operator con più condizioni (quindi usando l'equivalente dell'else if) ma per completezza scriverò come si fa:*/

string Orario2 = (Tempo == 7) ? "Sono le 7" : (Tempo == 2) ? "Sono le 2" : (Tempo == 10) ? "Sono le 10" : "Errore"; //Basta solo aggiungere altre condizioni dopo [:]
cout << Orario2 << endl; //in questo caso printerà "Sono le 10".
}

int main(){

    bool Maschio = true; //può essere cambiato da true a false per testare il codice.
    bool Altezza = true; //può essere cambiato da true a false per testare il codice.

    if (Maschio && Altezza){ //viene eseguito solo se maschio e altezza sono veri (entrambi). L'operatore logico && si chiama AND.
        cout << "Sei un maschio alto" << endl;
    }
    else if (Maschio && !Altezza){ //viene eseguito solo se maschio è vero e altezza è falso. L'operatore logico ! si chiama NOT. [Da non confondersi con != che è "Diverso da"]
        cout << "Sei un maschio basso" << endl;
    }
    else if (!Maschio && Altezza){ //viene eseguito solo se maschio è falso e altezza è vero.
        cout << "Sei una ragazza alta" << endl;
    }
    else if (!Maschio && !Altezza){ //viene eseguito solo se maschio è falso e altezza è falso.
        cout << "Sei una ragazza bassa" << endl;
    }

    //Da qui in poi ci sarà un esempio di una funzione.
    
    if(Frutta){ //viene eseguito solo se frutta è vero.
        cout << "Possiedi della frutta" << endl;
    }
    else { //viene eseguito solo se frutta è falso.
        cout << "Non possiedi della frutta" << endl;
    }

    //Da qui in poi farò altri esempi di operatori con if.

    cout << "Il numero più grande tra 2 e 4 è " << Maggiore(2, 4) << endl; //vedere appunti funzioni_numeriche.cpp per vedere la funzione più adatta per questo tipo di calcolo e funzioni.cpp per capire la funzione in questione.
    
    cout << "3 e 4 sono lo stesso numero? " << Uguali(3, 4) << endl; //questi valori possono essere cambiati per essere testati.
    
    return 0;
}

bool Frutta(){
    
    bool Frutta; //Questa variabile sarà vera o falsa a seconda degli If in questa funzione.
    
    bool Pera = false; //può essere cambiato da true a false per testare il codice.
    bool Banana = false; //può essere cambiato da true a false per testare il codice.
    bool Fragola = false; //può essere cambiato da true a false per testare il codice.
    bool Mela = true; //può essere cambiato da true a false per testare il codice.

    if(Pera || Banana || Fragola || Mela){ //viene eseguito solo se uno di questi parametri è vero (non importa se tutti gli altri sono falsi). L'operatore logico || si chiama OR.
        bool Frutta = true;
    }
    else { //Se nessuna di queste variabili è vera, allora viene eseguito else.
        bool Frutta = false;
    }

    return Frutta; //sto facendo tornare questa variabile nella funzione Main per completare l'ultimo if.
}

int Maggiore(int Numero1, int Numero2){
    int Risultato; //dichiaro la variabile da mandare indietro al main.

    if(Numero1 > Numero2){ //Ci sono anche altri operatori, come > che è "maggiore", quindi in questo caso se Numero1 è maggiore di Numero2 allora la funzione è vera, altrimenti falsa e eseguirà l'else.
        Risultato = Numero1;
    }
    else {
        Risultato = Numero2;
    }

    return Risultato;
} //Ci sono altri operatori come > (maggiore), come < (minore); >= (maggiore uguale) e <= (minore uguale).

string Uguali(int Numero1, int Numero2){ //in questa funzione ho fatto degli esempi sugli operatori di ugualianza.
    string Risultato;

    if(Numero1 == Numero2){ //Questo operatore == significa "Uguale a", ovvero sto comparando Numero1 e Numero2 per vedere se sono uguali. Se lo sono, allora la funzione è vera.
        Risultato = "Sì, sono lo stesso numero.";
    }
    else if(Numero1 != Numero2){ //Questo operatore != significa "Diverso da", ovvero sto comparando Numero1 e Numero2 per vedere se sono diversi. Se lo sono, allora la funzione è vera.
        Risultato = "No, sono numeri diversi.";
    }

    Ternary(); //Eseguo la funzione Ternary scritta sopra.

    return Risultato;
}