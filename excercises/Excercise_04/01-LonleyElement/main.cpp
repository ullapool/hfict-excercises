#include <iostream>
#include <string>
#include <stringutil.h>
#include <ctime>


using namespace std;

int main()
{

    string input = "aabbccvee";
    clock_t start, stop;
    start = clock();
    char result = StringUtil::getLonleyElement(input);
    stop = clock();
    cout<<"Single letter is: "<<result<<endl;
    cout <<"Time: "<< (double)(stop-start) / CLOCKS_PER_SEC << endl;
    return 0;

}
