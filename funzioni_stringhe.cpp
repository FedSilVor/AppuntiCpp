//Copyright: FedSilVor 2021
#include <iostream>

using namespace std;

int main(){
    string ParolaChiave = "Serpente Giallo";

    /*Le parentesi quadre stanno ad indicare
    quale lettera andrò a printare, in questo
    caso la 1 che sarebbe "e" (da 0 in su). 
    In seguito ci saranno altri esempi.
    (endl è end line, manda a capo)*/
    cout << ParolaChiave[1] << endl;
    /*In questo caso andrà a printare la quinta
    lettera, ovvero la "n"*/
    cout << ParolaChiave[5] << endl;
    /*In questo caso invece printerà la prima
    lettera ovvero la "S"*/
    cout << ParolaChiave[0] << endl;

    /*con la funzione .lenght inserita subito
    dopo la variabile, il programma printerà
    il numero di lettere nella variabile, che
    in questo caso sono 15 (spazio incluso)*/
    cout << ParolaChiave.length() << endl;

    /*Usando questo metodo, possiamo cambiare
    singole lettere in una variabile string
    già esistente, in questo caso ho scelto
    varie posizioni nelle parentesi quadre
    (come mostrato precedentemente) e
    successivamente gli ho assegnato una lettera
    (quindi un valore char), modificando così
    la variabile*/
    ParolaChiave[0] = 'P';
    cout << ParolaChiave << endl;
    ParolaChiave[9] = 'B';
    cout << ParolaChiave << endl;
    ParolaChiave[8] = '_';
    cout << ParolaChiave << endl;

    /*In questo caso sto solo resettando la
    variabile a come era una volta, avendola
    modificata nell'esempio precedente.*/
    ParolaChiave = "Serpente Giallo";

    /*Con la funzione .find diamo al programma
    dei Parametri da seguire, in questo caso
    gli sto dicendo di trovarmi la parola
    "Giallo" nella mia variabile, iniziando
    dalla lettera 0 (come negli esempi precedenti)
    e il programma printerà un numero, che sarà
    la posizione nella quale troverà la parola 
    "Giallo" (contando le parole da 0 fino a 15,
    avendo la variabile 15 lettere, spazio compreso).
    In questo caso la parola "Giallo" si troverà
    nella lettera 9.*/
    cout << ParolaChiave.find("Giallo", 0) << endl;

    /*la funzione .substr serve a prendere una precisa
    parte dello string. Quindi a differenza delle
    parentesi quadre, andrò a prendere più lettere
    (quindi un'intera stringa). Per questa funzione
    ho bisogno di due parametri, ovvero due numeri.
    Il primo numero è la posizione della lettera, da
    dove andrò a prendere la parte di stringa, mentre 
    il secondo numero sta a segnare quante lettere, 
    partendo dal primo numero, andrò effettivamente a 
    prendere. In questo caso parto da 0, che è la prima
    lettera (S), e decido di prendere 8 lettere, così
    facendo andrò a prendere tutta la parola "Serpente"
    (avendo 8 lettere la parola in questione).*/
    cout << ParolaChiave.substr(0, 8) << endl;

    /*Questa funzione può essere utilizzata anche come
    variabile (senza ogni volta riscrivere la funzione).
    In questo caso sto creando una variabile uguale a
    quella di prima, però aggiungendo Substr per
    diversifiarla da quella normale (è solo un nome
    e quindi può variare a seconda dei casi).*/
    string ParolaChiaveSubstr;
    
    /*In questo caso invece sto dando un valore alla
    variabile appena creata, facendo lo stesso procedimento
    di prima, solo che al posto di prendere la parola
    "Serpente" sto prendendo la parola "Giallo".*/
    ParolaChiaveSubstr = ParolaChiave.substr(9, 6);

    /*Dopo aver fatto questo procedimento, non mi serve più
    rimettere la funzione alla variabile ParolaChiave, mi
    basta semplicemente printare la variabile appena creata,
    quella con la funzione .substr al suo interno, per
    questione di semplicità.*/
    cout << ParolaChiaveSubstr << endl;

    return 0;
    
}