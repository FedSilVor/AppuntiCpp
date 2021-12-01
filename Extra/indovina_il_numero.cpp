//Copyright: FedSilVor 2021
//
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

    srand(time(NULL)); //questa funzione fa si che ogni volta che noi eseguiremo il programma, verrà generato un numero sempre diverso.

    int CinNum;
    int Tentativi; 
    int NumeroSegreto; 
    int Vite; //verrà modificato nella scelta della difficoltà.
    int ViteScelta;
    int Riavvia;
    bool Limite;

    do{
    Tentativi = 0;
    NumeroSegreto = rand() % 10 + 1; //questo comando genera un numero casuale da 0 a 9 e sommerà il risultato di 1 (quindi da 1 a 10).
    Limite = false;

    cout << "Benvenuto nel gioco di indovina il numero!" << endl;
    cout << "Dovrai indovinare un numero casuale da 1 a 10, se lo indovini vincerai!\n" << endl;
    do{
    cout << "Scegli la difficolta':" << endl;
    cout << "[1] FACILE = 5 vite.\n[2] NORMALE = 3 vite.\n[3] DIFFICILE = 1 vita." << endl;

    cin >> ViteScelta;

    switch(ViteScelta){
        
        case 1:
            Vite = 5;
            break;
        
        case 2:
            Vite = 3;
            break;
        
        case 3:
            Vite = 1;
            break;
        
        default:
            cout << "Input non valido." << endl;
            break;
    }
    }while(ViteScelta < 1 || ViteScelta > 3);

    cout << "\nDifficolta' scelta, indovini il numero!" << endl;

    do{
        if(Tentativi < Vite){
            cout << "Digita un numero: ";
            cin >> CinNum;
            Tentativi++;
            if(CinNum != NumeroSegreto && Tentativi < Vite){
                cout << "Non hai indovinato, riprova!" << endl;
            }
        } else{
            Limite = true;
        }
    }while(NumeroSegreto != CinNum && !Limite);
    
    if(Limite){
        cout << "Mi dispiace, hai perso!" << endl;
        cout << "Il numero segreto era: " << NumeroSegreto << endl;
    } else{
        cout << "Complimenti, Hai vinto!" << endl;
        cout << "Il numero segreto era: " << NumeroSegreto << endl;
    }

    do{
    cout << "\nVuoi giocare ancora?" << endl;
    cout << "[1] Si'\n[2] No" << endl;
    cin >> Riavvia;
    }while(Riavvia < 1 || Riavvia > 2);

    }while(Riavvia == 1);

    cout << "Hai scelto di chiudere il programma, buona giornata!" << endl;
    system("pause");

    return 0;
}
