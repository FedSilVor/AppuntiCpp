//Copyright: FedSilVor 2022

//Piccolo esercizio su C++
#include <iostream>

//Aggiungere Exception Handling!

class BankAccount{
    public:
        
        float getSoldi(){
            return soldi;
        }
        
        void deposito(float somma){
            soldi = soldi + somma;
        }

        void prelievo(float somma){
                soldi = soldi - somma;
        }

        /*void trasferimento(float somma, BankAccount* ba){
            prelievo(somma);
            ba->deposito(somma);
        }*/                         //Vecchio trasferimento con puntatori.

        BankAccount trasferimento(float somma, BankAccount ba){
                prelievo(somma);
                ba.deposito(somma);

            return ba;
        }

    private:
        
        float soldi = 0;
};

int main(){

    BankAccount ba1;
    BankAccount ba2;

    ba1.deposito(500.0);

    std::cout << ba1.getSoldi() << std::endl;

    ba1.prelievo(75.50);

    std::cout << ba1.getSoldi() << std::endl;

    //ba1.trasferimento(10.0, &ba2);        //Vecchio metodo con puntatori.
    ba2 = ba1.trasferimento(800.0, ba2);

    std::cout << ba1.getSoldi() << std::endl;
    std::cout << ba2.getSoldi() << std::endl;
    
    return 0;
}