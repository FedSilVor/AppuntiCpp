//Copyright: FedSilVor 2021

#include <iostream>
/*Quest'ultima libreria è per includere nel programma delle funzioni
matematiche aggiuntive*/
#include <cmath>

using namespace std;

int main(){
    int num;

    /*In questo cout stiamo eseguendo un calcolo di soli numeri interi,
    ciò significa che nel risultato non ci sarà nessun valore decimale,
    solo numeri interi (esempio: 10 diviso 3 fa 3 con il resto di 1, però
    essendo un calcolo di soli numeri interi verrà fuori solo 3)*/
    cout << 10 / 3 << endl;
    /*Stessa cosa del cout precedente, l'unica differenza è che non
    stiamo più eseguendo un calcolo tra numeri interi, stiamo invece
    eseguendo un calcolo tra numeri decimali, questo significa che il
    risultato comprenderà un valore decimale (3.3333...). Per fare ciò basta
    semplicemente aggiungere .0 al numero in questione. Così facendo stiamo
    trasformando un numero intero in un numero decimale.*/
    cout << 10.0 / 3.0 << endl;

    num = 5;
    
    /*Il valore della variabile num è 5, con questa funzione aggiungerò una
    cifra alla variabile (quindi num diventerà 6). E' possibile scrivere anche
    num--; che invece di aggiungere una cifra, la toglie (invece di +1 fa -1).*/
    num++;
    cout << num << endl;

    /*Questa funzione è molto simile a quella precedente, solo che invece di
    aggiungere una sola cifra, ne aggiunge una specifica (in questo caso 4).
    E' possibile eseguire diversi tipi di calcoli oltre all'addizione, basta
    sostituire il + (il + sarebbe addizione) con il tipo di calcolo che si vuole eseguire.
    (sottrazione [-]; moltiplicazione [*]; divisione [/]; resto della divisione [%]*/
    num += 4;
    cout << num << endl;

    // DA QUI IN POI LE FUNZIONI SVOLTE AVRANNO BISOGNO DELLA LIBRERIA <cmath>
    
    /*In questo cout sto eseguendo una potenza, dove il primo numero è la base
    (in questo caso il 4) e il secondo numero invece è l'esponente (in questo caso il 3).
    Il risultato sarà 64 (4 elevato al cubo oppure elevato alla terza).*/
    cout << pow(4, 3) << endl;

    /*In questo cout sto eseguendo la radice quadrata del numero all'interno delle parentesi
    tonde, volendo posso mettere al suo interno anche numeri decimali. In questo caso il
    risultato sarà 6 (radice quadrata di 36).*/
    cout << sqrt(36) << endl;

    /*In questo cout sto arrotondando un numero decimale a seconda del suo valore,
    facendolo diventare un numero intero. In questo caso abbiamo 4.3, che verrà arrotondato
    per difetto e quindi diventerà 4.*/
    cout << round(4.3) << endl;
    /*Stessa cosa di prima, cambia solo il numero da arrotondare che in questo caso è 4.6,
    ovvero un numero che tende di più al 5. Infatti in questo caso il numero verrà arrotondato
    per eccesso, diventando 5.*/
    cout << round(4.6) << endl;

    /*Anche in questo cout arrotonderò il valore all'interno delle parentesi tonde, come nello
    scorso esempio (quindi da numero decimale diventerà un numero intero) l'unica differenza è
    che la funzione ceil() arrotonderà SEMPRE per eccesso, anche con un valore decimale basso,
    come ad esempio 4.0001. Mentre invece con la funzione round() il numero in questione dovrebbe
    essere uguale o superiore a .5 per essere arrotondato per eccesso. In questo caso invece,
    con la funzione ceil(), il numero verrà arrotonato a 5 anche con un valore decimale basso.*/
    cout << ceil(4.0001) << endl;
    /*Stessa cosa della funzione precedente, l'unica differenza è che se prima il numero veniva
    sempre arrotondato per eccesso in presenza di un numero decimale, in questo caso verrà sempre
    arrotondato per difetto anche con un valore decimale di 4.9999 ad esempio. Il risultato infatti
    sarà 4 nonostante il valore decimale così alto.*/
    cout << floor(4.9999) << endl;

    /*In questo cout sto eseguendo la funzione fmax(), che sostanzialmente prende due numeri e ne
    farà uscire solo uno, ovvero quello più grande. In questo caso 9 è più grande di 3, perciò verrà
    printato solo il valore 9.*/
    cout << fmax(3, 9) << endl;
    /*Stessa cosa della funzione fmax(), solo che invece di printare il valore più alto, printerà il
    valore più basso, che in questo caso è 3.*/
    cout << fmin(3, 9) << endl;

    // NOTA: Ogni valore numerico in questo programma può essere sostituito con una variabile.
    // ESEMPIO: invece di scrivere ceil(4.2), posso scrivere ceil(Variabile_X).
    /*La variabile num attualmente è 10, come dimostra questo cout*/
    cout << num << endl;
    /*In questo cout sto eseguendo una potenza, dove al posto di scrivere a mano la base, sto
    mettendo la variabile num, che in questo caso è 10. Quindi andrò a fare num (ovvero 10)
    elevato al quadrato oppure elevato alla seconda.*/
    cout << pow(num, 2) << endl;

    int Array1D[5] = {3, 5, 6, 7, 4};
                    //0, 1, 2, 3, 4. Sono le posizioni dei numeri
    
    /*In questo caso ho creato una variabile array, la sua funzione è quella di contenere al
    suo interno più numeri (possiamo specificare quanti numeri o lasciare la parentesi quadra
    vuota per non avere limitazioni), se vogliamo printare un numero al suo interno dobbiamo
    specificare nella parentesi quadra la sua posizione (che parte da 0 e non da 1, l'esempio
    è scritto di sopra). Ecco un esempio:*/
    cout << Array1D[3] << endl;
    //In questo caso ho scelto la terza posizione, quindi printerà il 7.

    int Array2D[3][5] = {
              //0  1
        {1, 3, 5, 7, 9},
    //[0]0, 1, 2, 3, 4.
        {11, 13, 15, 17, 19},
    //[1] 0,  1,  2,  3,  4.
        {21, 23, 15, 27, 29}
    //[2] 0,  1,  2,  3,  4.
    };
    /*In questo caso invece ho creato una variabile Array2D, ovvero con due dimensioni.
    Nella prima parentesi quadra [0] ho inserito il numero di quante colonne di array volevo creare,
    in questo caso 3. Nella seconda parentesi quadra [1] ho inserito invece quanti numeri volevo inserire
    per ogni colonna (quindi abbiamo 3 colonne di array che possono contenere 5 numeri ciascuna).
    Il metodo per printare un numero è simile a quello di prima, solo che dobbiamo specificare prima la colonna
    e infine la posizione in quella determinata colonna.
    Adesso andrò a printare 3; 11 e 29.*/

    cout << Array2D[0][1] << endl; //Printerà 3.
    cout << Array2D[1][0] << endl; //Printerà 11.
    cout << Array2D[2][4] << endl; //Printerà 29.

    return 0;
}