//Copyright: FedSilVor 2021
#include <iostream>
using namespace std;

class Spesa{ //verrà spiegato successivamente durante l'arrow operator [->].
    public:
        int Prezzo;
        int Sconto;

        Spesa(int prezzo1, int sconto1){ //costruttore. Ricordatevi di usare lo stesso nome della classe, io me l'ero scordato e stavo impazzendo.
            Prezzo = prezzo1;
            Sconto = sconto1;
        } //cose già spiegate in altri appunti.

}; 

int main(){

    int Numero = 10;
    int *pNumero = &Numero; /*Questo è un puntatore, in questo caso sto creando una variabile che prenderà l'indirizzo della variabile
    "Numero" e lo salverà nella variabile "pNumero". Questo è utile perché il valore pointer è solo un indirizzo e no una variabile vera
    e propria, può essere usato ad esempio per trasferirlo da una funzione all'altra, visto che non fa riferimento al programma e
    quindi alle variabili ma alla memoria fisica del Computer. Per creare una variabile, è necessario mettere il prefisso [*] nel
    nome della variabile e il prefisso [&] quando assegniamo un valore al puntatore, come è scritto di sopra. */

/*  I pointers (puntatori) sono l'indirizzo fisico di una qualsiasi variabile. Quando si dichiara una variabile, il suo valore viene
    collocato nella cella della RAM all'interno di un contenitore, tutto ciò che fanno i puntatori è prendere l'indirizzo di quel contenitore
    riferendosi alla cella della RAM. Quando vogliamo visualizzare l'indirizzo fisico di una variabile, tutto ciò che dobbiamo fare è printare
    la variabile mettendo il prefisso [&] come nell'esempio. */

    cout << &Numero << endl;

/*  Mentre invece se vogliamo prendere una variabile che al suo interno contiene un indirizzo (come nel caso di pNumero) e vogliamo
    visualizzare il valore al suo interno, basta mettere il prefisso [*] al posto del prefisso [&]. Così facendo invece di printare
    l'indirizzo come nell'esempio precedente, sto dicendo al programma di andare in quell'indirizzo, prendere il valore della variabile
    e printarmi quel valore. */

    cout << *pNumero << endl;

/*  Anche se non è efficente, possiamo anche mettere entrambi i prefissi. Ad esempio se mettiamo [*&] sto dicendo al programma di prendere
    l'indirizzo di una determinata variabile per poi printare il valore al suo interno. Oppure possiamo anche mettere [&*&] che fa quello
    che ho spiegato prima, però riprenderà l'indirizzo di quel valore, così all'infinito. Ecco un esempio: */

    cout << *&Numero << endl; //In questo caso printerà 10, ovvero il suo valore numerico.
    cout << &*&Numero << endl; //Mentre invece in questo caso printerà il suo indirizzo.

/*  In questo caso invece ho scritto un piccolo codice che rende bene l'idea del possibile uso dei puntatori. In questo caso ho creato due
    variabili di tipo int {1}, ovvero "Numero1" e "Numero2" per poi creare una variabile pointer di nome "pNumeri" (anche se la variabile è di
    tipo pointer, bisogna comunque specificare che tipo di indirizzo verrà salvato al suo interno, quindi visto che in questo caso dovrò mettere
    al suo interno solo indirizzi di tipo int, dirò al programma che il tipo di variabile è int. Successivamente metterò il prefisso [*] per dire
    al programma che quel tipo di variabile è un pointer). Dopo aver dichiarato le variabili, ho assegnato alla variabile "pNumeri" l'indirizzo
    della variabile "Numero1" {2} (infatti "Numero1" ha il prefisso [&], quindi non sto facendo riferimento al suo valore ma al suo indirizzo).
    Quindi, ora che "pNumeri" ha come valore l'indirizzo di "Numero1", posso assegnargli un valore numerico, facendo attenzione ad inserire il
    prefisso [*] alla variabile "pNumeri" perché devo specificare che voglio mettere il valore numerico (in questo caso "20") nell'indirizzo
    all'interno della variabile "pNumeri" (quindi l'indirizzo di "Numero1" che abbiamo preso nella riga precedente), così facendo sto assegnando
    un valore alla variabile "Numero1" senza però chiamarla, al suo posto sto chiamando "pNumeri", ovvero un pointer. Questo caso non è efficente,
    però questo esempio può essere applicato in situazioni particolari dove non possiamo chiamare direttamente la variabile in questione e, al suo
    posto, dobbiamo usare un pointer. Nelle successive due righe ho ripetuto lo stesso step solo che al posto di assegnare un valore a "Numero1"
    l'ho assegnato a "Numero2", usando però lo stesso pointer "pNumeri". Successivamente ho semplicemente printato "Numero1" e "Numero2" {3}, per
    confermare che i loro valori siano stati assegnati correttamente. */
    
    int Numero1, Numero2; //{1}
    int *pNumeri;

    pNumeri = &Numero1; //{2}
    *pNumeri = 20;
    pNumeri = &Numero2;
    *pNumeri = 40;
    
    cout << "Il primo numero e': " << Numero1 << endl; //{3}
    cout << "Il secondo numero e': " << Numero2 << endl;

/*  Infine come ultimo puntatore abbiamo la arrow operator [->] (in caso si abbiano dubbi sulle classi andare a vedere gli appunti su di esse).
    Per farla facile, è come un dot operator [.] quando si definisce una variabile in una classe (Esempio: [oggetto_classe.variabile_classe = valore])
    solo che in questo caso non si tratta di una variabile ma di un puntatore (quindi sarebbe: [oggetto_classe->variabile_classe = valore]).
    In altre parole, va usato solamente se l'oggetto che è stato definito sia un puntatore, se non lo è allora va usato il dot operator. [.]    */

    Spesa Carlo(50, 25); //Questo processo è già stato spiegato in altri appunti (quelli sulle classi).

    cout << "Prezzo della spesa di Carlo: " << Carlo.Prezzo << endl;
    cout << "Sconto applicato alla spesa di Carlo: " << Carlo.Sconto << endl;

/*  In questo caso invece andrò a creare un altro oggetto, questa volta però sarà un puntatore, che andrà a prendere gli stessi valori dell'oggetto "Carlo".
    Il processo poi è lo stesso, come lo sarà il risultato, ciò che cambierà è che quando andrò a chiamare il valore specifico non userò più il dot operator,
    ma bensì l'arrow operator, essendo un puntatore. (e sì, tutto qua)  */

    Spesa *Vincenzo = &Carlo;

    cout << "Prezzo della spesa di Vincenzo: " << Vincenzo->Prezzo << " -> Lo stesso di Carlo!" << endl; //infatti in questi casi utilizzerò [->] e non più [.]
    cout << "Sconto applicato alla spesa di Vincenzo: " << Vincenzo->Sconto << " -> Lo stesso di Carlo!" << endl;

    return 0;
}