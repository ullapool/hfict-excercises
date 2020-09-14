#include <iostream>
#include <coincombination.h>

using namespace std;

int main()
{
    int size = 7;
    double coin[] {5, 2, 1, 0.50, 0.20, 0.10, 0.05};
    double value;


    cout<<"Geldbetrag: ";cin>>value;
    cout<<endl;

    CoinCombination::printCoinCombination(value, coin, size);

    return 0;
}
