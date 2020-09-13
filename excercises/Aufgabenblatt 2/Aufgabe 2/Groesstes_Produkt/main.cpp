#include <iostream>
#include "arrayutil.h"
#include <ctime>

using namespace std;

int main()
{
    clock_t start, stop;
    int size = 6;
    int values[] {5, -6, 100, 2, 4,66};

    start = clock();
    int result = ArrayUtil::highestProduct(values, size);
    stop = clock();
    cout<<"The highest possible product of 3 elements in this array is: "<<result<<"\n\n";

    double time = (double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Running time of the program: "<<time<<"s"<<endl;
    return 0;
}
