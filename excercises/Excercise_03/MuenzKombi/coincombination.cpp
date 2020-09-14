#include "coincombination.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>


using namespace std;


void CoinCombination::printCoinCombination(double value, const double *coin, const int ARRAY_SIZE){


    double coinCounter;
    int index = 0;

    for (int i=0; i<ARRAY_SIZE; i++){

         coinCounter = value / coin[i];
         if((int)coinCounter <= 0){
             break;
         }



        for(int j=0; j<(int)coinCounter; j++){

             cout<<"Insert --> "<<coin[index]<<" ";
        }
         cout<<endl;
         cout<<"Restbetrag: "<<(int)value -((int)coinCounter * coin[i])<<endl;
         cout<<endl;

         index++;
         value = value - ((int)coinCounter * coin[i]);



    }
        cout<<"### Please take your purchase ###"<<endl;




}

