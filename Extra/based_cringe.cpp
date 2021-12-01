//Copyright: FedSilVor 2021
//
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

int main(){
    
    ofstream text("BasedCringe.txt");
    srand(time(NULL));
    
    int Counter;
    int Cringe = 0;
    int Based = 0;
    
    cout << "How many Based or Cringe do you want?" << endl;
    cin >> Counter;
    
    for(int c = 0; c < Counter; c++){
        
        int BasedOrCringe = rand() % 2 + 0;

        if(BasedOrCringe == 1){
            text << "Based ";
            Based++;
        } else{
            text << "Cringe ";
            Cringe++;
        }
    }

    if(Based > Cringe){
        cout << "You are mostly based!" << endl;
    } else if(Based < Cringe){
        cout << "You are mostly cringe!" << endl;
    } else{
        cout << "You are based and cringe!" << endl;
    }
    
    return 0;
}
