//Copyright: FedSilVor 2021
#include <iostream>

using namespace std;

int main(){

    string NomePersonaggio; //variabile nella quale inserirĂ² il nome del personaggio.
    int NumeroMele; //variabile nella quale inserirĂ² il numero delle mele.

    cout << "Inserisci il nome del personaggio: \n";
    cin >> NomePersonaggio; //cin serve per prendere l'input dall'utente, dobbiamo usare maggiore due volte invece di minore due volte.
    cout << "Inserisci quante mele ha il personaggio: \n";
    cin >> NumeroMele;
    
    cout << "" << NomePersonaggio << " possiede "<< NumeroMele <<" mele!" << endl; //PrinterĂ  il risultato con l'input che abbiamo scelto!
    
    /*
    Risultato: "[NomePersonaggio] possiede [NumeroMele] mele!"
    */

    return 0;
}
