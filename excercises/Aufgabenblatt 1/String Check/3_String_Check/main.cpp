#include <iostream>
#include <stringutil.h>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    system("color 3"); //change console color

    unsigned seed = time(0); //Random time (taken from system clock)
    srand(seed);
    string s; //= "abcdef";

    //generate random string
    for (int i=0;i<5;i++)
    {
        s +=  rand() % 26 +'a';

    }

    cout<<"Random String = "<<s<<" | Length: "<<s.length()<<endl;

    //check if random
    if (StringUtil::checkUniqueness(s))
        cout<<"The string is unique!"<<endl;

    else
         cout<<"The string is not unique!"<<endl;

    cout<<endl;
    return 0;
}
