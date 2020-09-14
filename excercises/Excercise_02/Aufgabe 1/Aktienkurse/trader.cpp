#include "trader.h"
#include <iostream>
#include <algorithm>
#include <climits>


using namespace std;


int Trader::calculateMaxProfit(const int *values, const int ARRAY_SIZE )
{
    int maxValue =0;
    int minValue = 0;
    int minPosition ;
    int maxPosition = 0;
    int difference(INT_MIN); //lowest Value an Integar can get.
    int topTrade =0;
    int counterLine = 0;
    int hour = 9;
    int minutes = 0;
    int sellhour, sellmin;
    int buyhour, buymin;

    // Output Trades per minutes
    cout<< "                       *Today's Trade-Rate*"<<endl;
    cout<<"___________________________________________________________________________"<<endl;
    for(int i=0; i<ARRAY_SIZE; i++){
        counterLine++;
        minutes++;
        cout<<" | "<<values[i];
      // endl for a better view
        if(counterLine == 15){
           counterLine = 0;
           cout<<endl;
        }
      // cout time after every hour
         if(minutes == 60){
            hour++;
            cout<<"## The Time is now: "<<hour<<":00 o'clock ##"<<endl;
            minutes = 0;
        }
     }
      cout<<"\n";
      cout<<"________________________________________________________________________________"<<"\n\n";


      // find max Value
//      for(int i=0; i<ARRAY_SIZE; i++){
//        if(values[i] > maxValue){
//           maxValue = values[i];
//           maxPosition = i;
//        }
//       }



       // find most profitable trade
        for (int i=0; i<ARRAY_SIZE; i++){
           for (int j=ARRAY_SIZE-1; j>i; j--){
              if(values[j] - values[i] >= difference){
                 maxPosition = j;
                 minPosition = i;
                 maxValue = values[j];
                 minValue = values[i];
                 difference = values[j] - values[i];
              }
            }
          }

       cout<<"lowest Price: "<<minValue<<" Highest Price: "<<maxValue<<endl;

       // Calculate the Time of buy and sell
       //check out stringstream <sstream>
       buymin = minPosition % 60;
       buyhour = minPosition / 60;
       sellhour = maxPosition / 60;
       sellmin = maxPosition % 60;
       cout<<"You bought your share at: "<<buyhour + 9 <<":";
       if(buymin < 10){
          cout<<"0"<<buymin<<" at a rate of: "<<minValue<<" Sfr."<<endl;}
       else  cout<<buymin<<" at a rate of: "<<minValue<<" Sfr."<<endl;
       cout<<"You sold your share at:  "<<sellhour + 9<<":";
       if(sellmin < 10){
           cout<<"0"<<sellmin<<" at a rate of: "<<maxValue<<"Sfr."<<endl;}
       else cout<<sellmin<<" at a rate of: "<<maxValue<<"Sfr."<<endl;


       // calculate the profit
       topTrade = maxValue - minValue;



       return topTrade;
}


// Teachers Code

//if (ARRAY_SIZE < 2) return 0;

//int minPrice = values[0];
//int maxPrice = values[0];
//int bestDeal = 0;

//// Start iterating over the array
//for (int i = 1; i < ARRAY_SIZE; i++)
//{
//    if (values[i] < minPrice)
//    {
//        // Lower minPrice found !!
//        // Update minPrice with current price
//        minPrice = values[i];

//        // Reset maxPrice to new miniumum
//        maxPrice = values[i];
//        continue;                                // takes you back to the for loop
//    }

//    if (values[i] > maxPrice)
//    {
//        // Higher maxPrice found !!
//        // Update maxPrice with current price
//        maxPrice = values[i];
//    }

//    // Check if the current would be better than the best deal recorded so far
//    int currentDeal = maxPrice - minPrice;
//    if (bestDeal < currentDeal)
//    {
//        // A better deal was found
//        bestDeal = currentDeal;
//    }
//}

//// No profit possible that day - Bad luck ;) - buy first and sell last
//if (bestDeal == 0)
//{
//    bestDeal = maxPrice - values[0];
//}

//return bestDeal;
//}
