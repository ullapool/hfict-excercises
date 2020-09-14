#include <iostream>
#include "arrayutil.h"
using namespace std;

Result ArrayUtil::analyseArray(vector<int> input)
{
    Result result;

    for(auto const valueV : input){
        if(valueV < 0){
            result.nNegative++;
        }
        else if (valueV > 0){
            result.nPositiv++;
        }
        else if (valueV == 0){
            result.nZero++;
        }
    }

    cout << endl;
    double resNegative = ( 100 /  (float)input.size()) * (float) result.nNegative;
    printf ("%s %0.1f%s\n", "Negativ: ", resNegative,"%");
    double resPositive = ( 100 / (float) input.size()) * (float) result.nPositiv;
    printf ("%s %0.1f%s\n","Positiv: ", resPositive, "%");
    double resNull = ( 100 / (float) input.size()) * (float) result.nZero;
    printf ("%s %0.1f%s\n", "Zero: ", resNull, "%");

    return result;

}
