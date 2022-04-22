//Copyright: FedSilVor 2021
#include <iostream>

using namespace std;

int main(){

    string NomePersonaggio; //variabile nella quale inserirò il nome del personaggio.
    int NumeroMele; //variabile nella quale inserirò il numero delle mele.

    cout << "Inserisci il nome del personaggio: \n";
    cin >> NomePersonaggio; //cin serve per prendere l'input dall'utente, dobbiamo usare maggiore due volte invece di minore due volte.
    cout << "Inserisci quante mele ha il personaggio: \n";
    cin >> NumeroMele;
    
    cout << "" << NomePersonaggio << " possiede "<< NumeroMele <<" mele!" << endl; //Printerà il risultato con l'input che abbiamo scelto!
    
    /*
    Risultato: "[NomePersonaggio] possiede [NumeroMele] mele!"
    */

    return 0;
}
