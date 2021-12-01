//Copyright: FedSilVor 2021
//Questa è una calcolatrice capace di compiere più funzioni matematiche e di loggare i risultati in un file .txt
#include <iostream>
#include <math.h>
#include <Windows.h>
#include <fstream>

using namespace std;

double a, b;
int scelta, cont, div1, div2;

void Addizione(double a, double b, int cont, ostream& log){

    cout << "=== | CALCOLO SCELTO: ADDIZIONE" << endl;
    Sleep(600);
    cout << "=== | Inserire il primo addendo: ";
    cin >> a;
    Sleep(150);
    cout << "=== | Inserire il secondo addendo: ";
    cin >> b;
    Sleep(300);
    cout << "=== | " << a << " + " << b << " = " << a+b << endl;
    log << "[CALCOLO N." << cont << "] " << a << " + " << b << " = " << a+b << endl;
    Sleep(800);
    cout << "=== | Ritorno al menu' principale...\n" << endl;
    Sleep(1000);
}

void Sottrazione(double a, double b, int cont, ostream& log){

    cout << "=== | CALCOLO SCELTO: SOTTRAZIONE" << endl;
    Sleep(600);
    cout << "=== | Inserire il minuendo: ";
    cin >> a;
    Sleep(150);
    cout << "=== | Inserire il sottraendo: ";
    cin >> b;
    Sleep(300);
    cout << "=== | " << a << " - " << b << " = " << a-b << endl;
    log << "[CALCOLO N." << cont << "] " << a << " - " << b << " = " << a-b << endl;
    Sleep(800);
    cout << "=== | Ritorno al menu' principale...\n" << endl;
    Sleep(1000);
}

void Moltiplicazione(double a, double b, int cont, ostream& log){

    cout << "=== | CALCOLO SCELTO: MOLTIPLICAZIONE" << endl;
    Sleep(600);
    cout << "=== | Inserire il moltiplicando: ";
    cin >> a;
    Sleep(150);
    cout << "=== | Inserire il moltiplicatore: ";
    cin >> b;
    Sleep(300);
    cout << "=== | " << a << " x " << b << " = " << a*b << endl;
    log << "[CALCOLO N." << cont << "] " << a << " x " << b << " = " << a*b << endl;
    Sleep(800);
    cout << "=== | Ritorno al menu' principale...\n" << endl;
    Sleep(1000);
}

void Divisione(int div1, int div2, int cont, ostream& log){

    cout << "=== | CALCOLO SCELTO: DIVISIONE [SOLO NUMERI INTERI]" << endl;
    Sleep(600);
    cout << "=== | Inserire il dividendo: ";
    cin >> div1;
    Sleep(150);
    cout << "=== | Inserire il divisore: ";
    cin >> div2;
    Sleep(300);
    cout << "=== | " << div1 << " : " << div2 << " = " << div1/div2 << endl;
    cout << "=== | Resto: " << div1%div2 << endl;
    log << "[CALCOLO N." << cont << "] " << div1 << " : " << div2 << " = " << div1/div2;
    log << " | Resto: " << div1%div2 << endl;
    Sleep(800);
    cout << "=== | Ritorno al menu' principale...\n" << endl;
    Sleep(1000);
}

void Potenza(double a, double b, int cont, ostream& log){

    cout << "=== | CALCOLO SCELTO: POTENZA" << endl;
    Sleep(600);
    cout << "=== | Inserire la base: ";
    cin >> a;
    Sleep(150);
    cout << "=== | Inserire l'esponente: ";
    cin >> b;
    Sleep(300);
    cout << "=== | " << a << " ^ " << b << " = " << pow(a, b) << endl;
    log << "[CALCOLO N." << cont << "] " << a << " ^ " << b << " = " << pow(a, b) << endl;
    Sleep(800);
    cout << "=== | Ritorno al menu' principale...\n" << endl;
    Sleep(1000);
}

void RadiceQuadrata(double a, int cont, ostream& log){

    cout << "=== | CALCOLO SCELTO: RADICE QUADRATA" << endl;
    Sleep(600);
    cout << "=== | Inserire il radicando: ";
    cin >> a;
    Sleep(300);
    cout << "=== | Radice Quadrata di " << a << " = " << sqrt(a) << endl;
    log << "[CALCOLO N." << cont << "] √" << a << " = " << sqrt(a) << endl;
    Sleep(800);
    cout << "=== | Ritorno al menu' principale...\n" << endl;
    Sleep(1000);
}

void FunzioneEsponenziale(double a, int cont, ostream& log){

    cout << "=== | CALCOLO SCELTO: FUNZIONE ESPONENZIALE" << endl;
    Sleep(600);
    cout << "=== | Inserire la base: ";
    cin >> a;
    Sleep(300);
    cout << "=== | Il valore esponenziale di " << a << " e' uguale a " << exp(a) << endl;
    log << "[CALCOLO N." << cont << "] Valore Esponenziale di " << a << " = " << exp(a) << endl;
    Sleep(800);
    cout << "=== | Ritorno al menu' principale...\n" << endl;
    Sleep(1000);
}

void Logaritmo(double a, int cont, ostream& log){

    cout << "=== | CALCOLO SCELTO: LOGARITMO (Base 10)" << endl;
    Sleep(600);
    cout << "=== | Inserire l'argomento: ";
    cin >> a;
    Sleep(300);
    cout << "=== | Il logaritmo di " << a << " e' uguale a " << log10(a) << endl;
    log << "[CALCOLO N." << cont << "] Logaritmo base 10 di " << a << " = " << log10(a) << endl;
    Sleep(800);
    cout << "=== | Ritorno al menu' principale...\n" << endl;
    Sleep(1000);
}

// Inizio del Main

int main(){

     ofstream log("Calcoli_Svolti.txt");

    cout << "============================================\n";
    cout << "=== Benvenuto nella Calcolatrice di Fed! ===\n";
    cout << "=============== Versione: 4.0. =============\n";
    cout << "============================================\n" << endl;
    Sleep(2000);

    do{ // Scelta del calcolo da svolgere.
    cout << "======== | CALCOLI DISPONIBILI       | =========\n";
    Sleep(300);
    cout << "======== | [1] ADDIZIONE             | =========\n";
    Sleep(100);
    cout << "======== | [2] SOTTRAZIONE           | =========\n";
    Sleep(100);
    cout << "======== | [3] MOLTIPLICAZIONE       | =========\n";
    Sleep(100);
    cout << "======== | [4] DIVISIONE             | =========\n";
    Sleep(100);
    cout << "======== | [5] POTENZA               | =========\n";
    Sleep(100);
    cout << "======== | [6] RADICE QUADRATA       | =========\n";
    Sleep(100);
    cout << "======== | [7] FUNZIONE ESPONENZIALE | =========\n";
    Sleep(100);
    cout << "======== | [8] LOGARITMO             | =========\n";
    Sleep(100);
    cout << "--------------------------------------------\n";
    Sleep(100);
    cout << "======== | [9] TERMINA PROGRAMMA     | =========\n" << endl; // NOTA: aggiornare sempre il numero per terminare il programma.
    Sleep(500);

    cout << "Digitare la scelta desiderata: ";
    cin >> scelta;
    Sleep(400);

    switch(scelta){ 

        case 1:
            cont++;
            Addizione(a, b, cont, log);
            break;

        case 2:
            cont++;
            Sottrazione(a, b, cont, log);
            break;

        case 3:
            cont++;
            Moltiplicazione(a, b, cont, log);
            break;

        case 4:
            cont++;
            Divisione(div1, div2, cont, log);
            break;

        case 5:
            cont++;
            Potenza(a, b, cont, log);
            break;
        
        case 6:
            cont++;
            RadiceQuadrata(a, cont, log);
            break;
        
        case 7:
            cont++;
            FunzioneEsponenziale(a, cont, log);
            break;
        
        case 8:
            cont++;
            Logaritmo(a, cont, log);
            break;

        case 9:
            cout << "Il programma verra' terminato, buona giornata!" << endl;
            Sleep(1000);
            break;

        default:
            cout << "Input non valido, ritorno al menu' principale...\n" << endl;
            Sleep(700);
            break;
        }
    
    }while (scelta!=9); // NOTA: aggiornare sempre il numero per terminare il programma.
    
    return 0;
    
}
