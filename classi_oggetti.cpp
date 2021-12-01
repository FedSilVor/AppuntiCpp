//Copyright: FedSilVor 2021
#include <iostream>
using namespace std;

/*Le classi sono un modo in C++ di creare altri tipi di variabili e sfruttare meglio diversi tipi di funzioni. Possiamo definire cose che
normalmente non possono essere definite con un numero intero o una stringa, ad esempio un libro che è un insieme di informazioni, e definirlo
con una sola variabile sarebbe impossibile. Con le classi posso creare un blueprint dove andrò a definire appunto il "nuovo" tipo di variabile,
ad esempio in questo caso ho definito un libro che a sua volta è formato da due stringhe e due numeri interi, che useremo successivamente per
definire altri libri diversi tra loro e quindi creare più oggetti. Se le classi in C++ sono un blueprint, gli oggetti sono il prodotto vero e
proprio che andremo a creare.*/

class Libro{            //ho creato una classe.
    public:             //ho reso tutto ciò pubblico, quindi il suo contenuto è accessibile ad ogni codice (vedremo altri casi successivamente).
        string Autore;  //qui sto solo dichiarando variabili che useremo nel main.
        string Titolo;
        int Pagine;
        int Voto;
};                      // NOTA: bisogna sia chiudere la parentesi graffa sia usare il punto e virgola.

class Compiti{ //fin qui il processo è identico al precedente.
    public:
        string Nome;
        string Esercizio;
        bool Svolto;
        int Valutazione;

        Compiti(string nom, string es, bool sv, int val){
            
            /*Ora per ogni informazione inserita insieme alla dichiarazione dell'oggetto, verrà trasferito nel costruttore come se fosse una
            funzione normale, assegniamo a queste informazioni una variabile a piacere (stesso processo delle funzioni) e inseriamo queste
            informazioni nelle variabili della classe, così facendo non dobbiamo inserire i valori manualmente ogni volta che creiamo un nuovo
            oggetto. Il costruttore verrà chiamato ed eseguito ogni volta che creiamo un nuovo oggetto. NOTA BENE: Il costruttore deve avere lo
            stesso nome della classe.*/
            
            Nome = nom;
            Esercizio = es;
            Svolto = sv;
            Valutazione = val;

            // NOTA: I costruttori non hanno un "return".
        }
        
        bool Sufficienza(){ //In questo caso invece sto creando una vera e propria funzione all'interno della classe, NON è un costruttore.
            
            /*Possiamo inserire delle funzioni all'interno delle classi, la particolarità delle funzioni all'interno delle classi è che se
            vogliamo riferisci ad una variabile all'interno della classe possiamo farlo, e prenderà le informazioni dell'oggetto in questione.
            Ad esempio, se chiamiamo la funzione Sufficienza riferendosi all'oggetto A1 ad esempio, prenderà le informazioni e le variabili 
            dell'oggetto A1 e no di altri. Tipo in questo caso ho utilizzato una funzione if dove ho inserito come variabile "Valutazione",
            se fossi stato in una funzione normale (senza classe) avrei dovuto inserire un valore più specifico, quindi in questo caso
            "A1.Valutazione" e avrebbe calcolato SOLO la valutazione di A1. Invece nel caso delle funzioni all'interno delle classi non c'è
            bisogno di specificare la variabile "Valutazione" se è dell'oggetto A1, B2 o C3, perché verrà definito quando chiameremo la funzione,
            con il prefisso "A1.", "B2." o "C3." e a seconda del caso considererà il valore di quel determinato oggetto, un vantaggio immenso per
            l'ottimizzazione, perché ad esempio mettiamo caso che alla creazione e alla compilazione di questo programma decidiamo che 6 è la
            valutazione minima per ricevere la sufficienza, però più in là si decide che la valutazione minima per ricevere la sufficienza diventa
            5 e non più 6, basterà semplicemente cambiare un valore (nello specifico sostituire qua sotto 5 al posto di 6) anziché modificare
            ogni oggetto manualmente. La funzionalità delle funzioni all'interno delle classi è la stessa delle funzioni normali, perciò quando
            chiamiamo questa funzione bisogna inserire alla fine le parentesi tonde, come ogni funzione.*/

            if(Valutazione >= 6){
                return true;
            }
            return false; //Non ho messo else perché se una funzione ritorna un valore viene terminato, non c'è bisogno di un else.
        }

};

class RGB{
    
    /*In questa classe ho creato un esempio di Setter e Getter. Quando noi inseriamo un valore all'interno di una variabile che sia
    pubblica, possiamo di fatto metterci ciò che vogliamo. Non ci sono parametri o limiti se non li creiamo, perciò in questo caso
    se voglio solamente un numero che vada dallo 0 al 255 non posso controllarlo perché nella parte pubblica delle classi posso
    inserire informazioni e accedervi senza nessun limite, ed è qui che entrano in gioco i Setter e i Getter. Prima di tutto spiego
    cosa cambia tra sezione della classe pubblica e privata: come ho già detto, nella parte pubblica della classe (tutto ciò che è al
    suo interno) non ci sono limiti, qualsiasi codice può inserire informazioni o leggere quelle già esistenti, senza nessun limite.
    Invece, a differenza della parte pubblica, tutto ciò che inseriamo nella parte privata della classe è accessibile SOLAMENTE da codici
    all'interno della classe stessa. In altre parole, se per esempio io ho una variabile privata all'interno di una classe, nessun codice
    può avere accesso a quella variabile, in nessun modo! Non posso né inserire informazioni né leggerle (quindi un cout non funzionerà)
    e questo vale non solo per le variabili ma per qualsiasi tipo di codice che è privato. Però i codici privati non sono del tutto privati,
    non possono essere letti da nessuno (quindi né funzione main né una funzione qualsiasi) ma possono essere letti all'interno della loro
    classe. Ad esempio mettiamo caso che abbiamo una variabile privata all'interno di una classe, e nella funzione main proviamo a printare
    quella variabile ci dà errore. Mentre invece se provo a printare la variabile privata in una funzione all'interno della stessa classe
    della variabile privata, posso farlo! A parole è difficile spiegarlo, basta seguire l'esempio di sotto per capire bene come funziona.
    Adesso che sappiamo la differenza tra codici privati e pubblici, possiamo parlare di Setter e Getter: quest'ultimi non sono altro che
    funzioni normali all'interno di una classe, il loro nome infatti deriva dalla funzionalità che svolgono queste funzioni, Setter infatti
    deriva da "Set" quindi "Impostare". Quando utilizziamo una funzione "Setter" noi stiamo "Impostando" un limite all'input e, se rispetta
    i criteri, l'input verrà inserito nella variabile privata. Essenzialmente, quello che fa un Setter (che è pubblico) è prendere l'input
    esterno e verificare se esso è accettabile oppure no (possiamo decidere come a modo nostro, ma in sostanza è quella la sua funzione),
    se l'input ci va bene allora il Setter imposterà il valore esterno alla variabile privata (il setter ha accesso alla variabile perché fa
    parte della stessa classe). Getter invece deriva dalla parola "Get" quindi "Prendere". Seguendo il caso di questa classe, abbiamo appena
    inserito un valore all'interno di una variabile privata grazie alla funzione Setter, però mettiamo caso che adesso vogliamo printare
    quella variabile, in teoria non si può fare perché quella variabile è privata, quindi non posso accedervi al di fuori della classe, ma
    grazie al Getter possiamo comunque accedere a quella variabile. Il getter (come il setter) è una funzione all'interno di una classe, e
    tutto ciò che fa è returnare il valore della variabile privata (vedi l'esempio di sotto). Il getter (come il Setter) è pubblico, perciò
    può essere chiamato esternamente per ricevere informazioni private della sua classe. Qua sotto c'è un esempio pratico di Setter e Getter.*/
    
    private:
        //ho dichiarato due variabili private.
        string Colore;
        int Valore;
    public:
        //Da qui in poi è tutto pubblico.
        RGB(string col, int val){
            /*In questo caso sto utilizzando un Costruttore, tutto ciò che fa è prendere 2 input esterni, assegnare a questi input una variabile
            e successivamente inserire questi input all'interno dei rispettivi Setter che verificheranno se l'input è valido oppure no, per poi
            chiamare la funzione in questione. Essendo un costruttore, viene ripetuto per ogni oggetto creato all'interno della classe.*/
            SetColore(col);
            SetValore(val);
        }
    
        void SetColore(string col){
            /*Una volta chiamata la funzione Setter, riceve l'input da verificare e procede il processo per capire se questo input è valido oppure
            no. Ogni processo di verifica è unico e dipende dalle esigenze, sta di fatto che il concetto dei Setter è quello di prendere un input
            esterno per poi verificarlo e, se valido, spostarlo nella parte privata della classe.*/
            if(col == "Rosso" || col == "Verde" || col == "Blu"){
                Colore = col; //In questo caso l'input è valido perciò viene spostato in una variabile privata.
            } else{
                Colore = "Il colore inserito non e' valido."; //Qui l'input non è valido perciò printerà un messaggio d'errore.
            }
        }

        string GetColore(){
            //Questo invece è una funzione Getter, tutto ciò che fa è farsi chiamare dall'esterno per poi returnare la variabile privata.
            return Colore;
        }

        //Stesso processo di prima, solo che al posto di returnare un valore string viene returnato un int (essendo la variabile di tipo diverso)
        //Contiene altri criteri e codici, ma il concetto di verificare l'input è lo stesso.

        void SetValore(int val){
            //Questo è un setter che tratta un tipo di input diverso rispetto al caso precedente.
            if(val <= 255 && val >= 0){
                Valore = val; //In questo caso l'input è valido perciò viene spostato in una variabile privata.
            } else{
                Valore = 0; //Qui l'input non è valido perciò printerà un valore nullo.
            }
        }

        int GetValore(){
            //Questo invece è una funzione Getter, tutto ciò che fa è farsi chiamare dall'esterno per poi returnare la variabile privata.
            return Valore;
        }

};

class Scelte1{

    /*In questo caso farò un esempio di Superclasse (superclass), ovvero una classe che verrà ereditata da un'altra classe. L'eredità in
    C++ è un modo efficente per scrivere più classi simili tra loro senza però riscrivere i parametri. In questo caso ad esempio ho creato
    una superclasse (per ora non ha niente di diverso rispetto ad una classe normale), questa classe contiene 2 funzioni che non fanno altro
    che printare il tipo di scelta (ad esempio "Scelta1" printerà: "Hai scelto il numero 1!"). Se vogliamo ad esempio creare una versione diversa
    di questa classe senza però riscrivere tutte le funzioni (l'eredità eredita ogni informazione a patto che sia all'interno della pubblica se
    ad esempio scegliamo di prendere informazioni nella parte pubblica e così via) questo è vantaggioso perché posso creare una classe completamente
    diversa con le funzioni della mia Superclasse.*/

    public:

        void Scelta1(){
            cout << "Hai scelto il numero 1!" << endl;
        }
        void Scelta2(){
            cout << "Hai scelto il numero 2!" << endl;
        }
        
};

class Scelte2 : public Scelte1{ // Per ereditare una classe basta specificare se è pubblica o no (seguito da : ) e il nome della classe.

    /*Questa invece è una Subclasse (subclass) ovvero una classe che prende informazioni di qualsiasi tipo da un'altra classe (in questo caso
    la classe "Scelte2" sta prendendo informazioni da "Scelte1"). Quindi, in questo caso, anche se nella classe non c'è una funzione di nome
    "Scelta1" (però nella classe "Scelte1" c'è) possiamo comunque chiamarla all'interno di questa classe. In altre parole, quando noi ereditiamo
    delle informazioni da un'altra classe è come se nella classe ci fossero le stesse informazioni della classe da cui abbiamo preso l'eredità,
    solo che non c'è bisogno di riscriverlo due volte. Ovviamente possiamo aggiungere nuove informazioni nella nostra Subclasse, che varrà solo per
    questa classe però (in questo esempio ho aggiunto "Scelte3" che è presente solo in questa subclasse). Mentre invece se proviamo ad aggiungere
    nuove informazioni nella Superclasse, essa verrà aggiunta in automatico anche nella subclasse. Un'altra cosa che possiamo fare nella subclasse
    è sovrascrivere le informazioni, ovvero possiamo decidere di riscrivere un'informazione completamente da 0. NOTA BENE: Se scegliamo di riscrivere
    una funzione per esempio, il suo contenuto verrà resettato, quindi dovremmo riscriverla da 0 (quindi non è che l'informazione resta in parte se
    decidiamo di sovrascrivere un'informazione). La parte bella di riscrivere le informazioni nella subclasse è che l'effetto varrà solo per la subclasse,
    se noi chiamiamo una funzione riscritta nella subclasse all'interno della superclasse, rimarrà invariata! Quindi è come se avessimo creato
    una seconda versione della funzione (facendo riferimento a queesto esempio, "Scelta2" è stato sovrascritto con un cout diverso rispetto alla
    superclasse, quindi se noi chiamiamo "Scelta2" all'interno della subclasse, printerà la versione della subclasse, quindi quella modificata. Se
    invece chiamiamo la funzione "Scelta2" all'interno della superclasse, printerà la versione originale, quella non modificata).*/

    public:
        
        void Scelta2(){
            cout << "Hai scelto il numero 2...Forse :3" << endl;
        }
        void Scelta3(){
            cout << "Hai scelto il numero 3, disponibile solo nelle scelte 2!" << endl;
        }

};

int main(){
    
    Libro AAPS, HP, IT; //Quando creo una variabile da una classe sto creando un oggetto (una classe è un blueprint, un oggetto è il risultato).

    //Adesso definiamo i vari libri inserendo informazioni nelle variabili della classe.

    AAPS.Autore = "Unknown";                        //Principalmente si usa questa sintassi, scritto così:
    AAPS.Titolo = "Amore a prima svista";       //[nome dell'oggetto].[nome variabile da inserire nella classe]
    AAPS.Pagine = 50;
    AAPS.Voto = 10;

    HP.Autore = "J.K. Rowling";
    HP.Titolo = "Harry Potter";
    HP.Pagine = 500;
    HP.Voto = 0;

    IT.Autore = "Stephen King";
    IT.Titolo = "IT";
    IT.Pagine = 800;
    IT.Voto = 8;

    //Adesso per confermare il tutto printerò tutte le informazioni dei vari libri.

    cout << "ELENCO DI LIBRI" << endl;
    
    cout << "----------------" << endl;
    
    cout << AAPS.Titolo << endl;                            //per printare la variabile dobbiamo usare la stessa sintassi di prima.
    cout << "Creato da: " << AAPS.Autore << endl;
    cout << "Lunghezza: " << AAPS.Pagine << " Pagine." << endl;
    cout << "Voto: " << AAPS.Voto << "/10" << endl;
    
    cout << "----------------" << endl;

    cout << HP.Titolo << endl;
    cout << "Creato da: " << HP.Autore << endl;
    cout << "Lunghezza: " << HP.Pagine << " Pagine." << endl;
    cout << "Voto: " << HP.Voto << "/10" << endl;
    
    cout << "----------------" << endl;

    cout << IT.Titolo << endl;
    cout << "Creato da: " << IT.Autore << endl;
    cout << "Lunghezza: " << IT.Pagine << " Pagine." << endl;
    cout << "Voto: " << IT.Voto << "/10" << endl;

    cout << "----------------\n" << endl;

    /*Nel caso precedente, abbiamo assegnato manualmente un valore a ogni variabile. Questo processo potrebbe essere lento e non produttivo in molti casi.
    Per ottimizzare il processo, possiamo utilizzare dei Costruttori (in inglese "Constructor") all'interno della nostra classe. I Costruttori sono delle
    funzioni speciali all'interno delle classi per compiere una determinata funzione quando creiamo un oggetto, molto utile per non definire manualmente
    ogni oggetto. Ecco un esempio:*/

    /*In questo caso sto assegnando dei valori da inserire, come quando chiamiamo una funzione, infatti quando chiamiamo una funzione noi mettiamo al suo
    interno i valori che andranno poi a finire nella funzione stessa sottoforma di variabile (variabile che dichiariamo nella funzione).
    In questo caso specifico dove non stiamo chiamando una funzione ma un costruttore (una funzione speciale) noi inseriamo i valori da inserire nel
    costruttore ogni volta che noi creiamo un oggetto, così facendo non si ha bisogno di assegnare manualmente ad ogni variabile un valore.*/
    Compiti A1("Albero Segin", "Disegna un cerchio per casa", true, 9);

    //Ora ripeterò il processo per altri oggetti.

    Compiti B2("Bruno Cavalletta", "Quanto fa 5+5? Motiva la tua risposta", false, 3);

    Compiti C3("Carmelo Deghi", "Calcola la circonferenza del sole", true, 11);

    //Ora printerò il risultato.

    cout << "ELENCO DEI COMPITI" << endl;
    
    cout << "------------------" << endl;
    
    cout << A1.Nome << endl;
    cout << "Esercizio: " << A1.Esercizio << endl;
    if(A1.Svolto){  //Creo una funzione if a seconda dei casi.
        cout << "L'esercizio è stato svolto." << endl;
    } else{
        cout << "L'esercizio non è stato svolto." << endl;
    }
    cout << "Valutazione: " << A1.Valutazione << " su 10" << endl;
    if(A1.Sufficienza()){ //Stiamo chiamando una funzione, perciò dobbiamo comunque mettere le parentesi anche se vuote come in questo caso. 
        cout << A1.Nome << " ha la sufficienza." << endl;
    } else{
        cout << A1.Nome << " non ha la sufficienza." << endl;
    }
    
    cout << "------------------" << endl;

    cout << B2.Nome << endl;
    cout << "Esercizio: " << B2.Esercizio << endl;
    if(B2.Svolto){
        cout << "L'esercizio è stato svolto." << endl;
    } else{
        cout << "L'esercizio non è stato svolto." << endl;
    }
    cout << "Valutazione: " << B2.Valutazione << " su 10" << endl;
    if(B2.Sufficienza()){
        cout << B2.Nome << " ha la sufficienza." << endl;
    } else{
        cout << B2.Nome << " non ha la sufficienza." << endl;
    }

    cout << "------------------" << endl;

    cout << C3.Nome << endl;
    cout << "Esercizio: " << C3.Esercizio << endl;
    if(C3.Svolto){
        cout << "L'esercizio è stato svolto." << endl;
    } else{
        cout << "L'esercizio non è stato svolto." << endl;
    }
    cout << "Valutazione: " << C3.Valutazione << " su 10" << endl;
    if(C3.Sufficienza()){
        cout << C3.Nome << " ha la sufficienza." << endl;
    } else{
        cout << C3.Nome << " non ha la sufficienza." << endl;
    }

    cout << "------------------\n" << endl;

    /*Il processo che viene svolto qui è stato già spiegato precedentemente, ovvero creiamo un oggetto, il costruttore prenderà l'input dell'oggetto
    in questione e da lì tutto il resto del processo è spiegato sopra, nella dichiarazione della classe. Il processo viene ripetuto per ogni oggetto
    creato.*/

    RGB R("Rosso", 67);
    RGB G("Verde", 300); //300 è un tipo di input non valido, perciò printerà 0 (ovvero errore).
    RGB B("Marrone", -21); //Sia "Marrone" che -21 sono un tipo di input non validi, perciò printerà errore per entrambi.

    //Da qui in poi ho semplicemente printato i valori assegnati.

    cout << "ELENCO DELLE INFORMAZIONI COLORE" << endl;
    cout << "--------------------------------" << endl;

    cout << "Nome informazione: R" << endl;
    /*Come ho spiegato in precedenza, non possiamo prendere valori da variabili private se non ci troviamo all'interno della classe stessa, perciò
    invece di scrivere il nome della variabile, che sarebbe in questo caso "R.Colore" ho utilizzato il Getter creato all'interno della classe.
    Se scelgo di printare il Getter (quindi "R.GetColore" e "R.GetValore") la funzione verrà chiamata all'interno della classe, e tutto ciò che farà
    è returnare il valore della variabile privata che vogliamo ottenere. Questo vale per ogni oggetto e variabile.*/
    cout << "Colore: " << R.GetColore() << endl; 
    cout << "Valore: " << R.GetValore() << endl;

    cout << "--------------------------------" << endl;

    cout << "Nome informazione: G" << endl;
    cout << "Colore: " << G.GetColore() << endl;
    cout << "Valore: " << G.GetValore() << endl;

    cout << "--------------------------------" << endl;

    cout << "Nome informazione: B" << endl;
    cout << "Colore: " << B.GetColore() << endl;
    cout << "Valore: " << B.GetValore() << endl;

    cout << "--------------------------------" << endl;

    Scelte1 S1; //Qua sto semplicemente dichiarando l'oggetto. "S1" è la superclasse.

    //NOTA BENE: All'interno della funzione, c'è già un cout. Non c'è bisogno di mettere un cout all'interno di un cout (sì, l'ho fatto davvero).

    S1.Scelta1(); //Printerà lo stesso messaggio di "S2.Scelta1" essendo stato ereditato.
    S1.Scelta2(); //Printerà il cout originale essendo la funzione della superclasse.
/*  S1.Scelta3(); Ho tenuto i commenti perché questa funzione nella superclasse non esiste, quindi non può essere
    chiamata, mentre invece nella subclasse esiste. In altre parole "S1.Scelta3" non può essere eseguito perché nella classe 
    "Scelte1" non esiste tale funzione (essendo una superclasse non ha informazioni in più, a differenza della subclasse) però nella
    subclasse "Scelte2" abbiamo aggiunto tale funzione, perciò nella sua classe (S2.Scelta3) può essere chiamato.*/

    cout << "--------------------------------" << endl;

    Scelte2 S2; //Qua sto semplicemente dichiarando l'oggetto. "S2" è la subclasse.
    
    S2.Scelta1(); //Sarà la stessa funzione di "S1.Scelta1" essendo ereditata dalla superclasse.
    S2.Scelta2(); //La funzione è riscritta, quindi sarà differente da "S1.Scelta2" (ovvero la versione della superclasse).
    S2.Scelta3(); //Questa funzione esiste solo nella classe Scelte2 (sub), no in Scelte1 (super).

    cout << "--------------------------------" << endl;

    return 0;
}

//C'ho messo 6 ore a scrivere 'sti appunti non ce la faccio più.