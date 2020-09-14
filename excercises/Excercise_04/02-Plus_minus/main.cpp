#include <iostream>
#include "result.h"
#include "arrayutil.h"
#include <vector>

using namespace std;

int main()
{
    int input;
    vector<int>v;

    for (int i=0; i<5; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>input;
        v.push_back(input);
    }

    Result result = ArrayUtil::analyseArray(v);

    cout << endl;

    cout<<"Anzahl negative Zahlen: "<<result.nNegative<<endl;
    cout<<"Anzahl positive Zahlen: "<<result.nPositiv<<endl;
    cout<<"Anzahl Nullen: "<<result.nZero<<endl;


   return 0;
}
