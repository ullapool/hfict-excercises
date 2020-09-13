#include <iostream>
#include <arrayutil.h>

using namespace std;

int main()
{
    long values[] {12,4,7,3};
    int size = 4;

    long *result = ArrayUtil::muliplyArrayValues(values, size);
    cout<<"output: ";
    for (int i=0; i<size;i++)
    {
        cout<<result[i]<<" | ";

    }
    cout<<endl;



    return 0;
}
