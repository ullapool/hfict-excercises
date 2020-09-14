#include <iostream>
#include <trader.h>
#include <ctime>

using namespace std;

int main()
{
    int size = 510;
    int value[size];
    unsigned seed = time(0); //Random time (taken from system clock)
    clock_t start, stop;

    srand(seed);

    for(int i=0;i<size; i++){

        value[i]= 1+ rand() % 100;
    }

    start = clock();
    int result = Trader::calculateMaxProfit(value, size);
    stop = clock();
    cout<<"Today's trade-profit: "<<result<<" Sfr"<<"\n\n";
    double time = (double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Running time: "<<time<<"\n\n";
    return 0;
}
