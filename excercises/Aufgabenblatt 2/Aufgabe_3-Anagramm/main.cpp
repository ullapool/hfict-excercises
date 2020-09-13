#include <iostream>
#include <string>
#include <algorithm>
#include <stringutil.h>
#include <ctime>

using namespace std;

int main()
{
    string s1 = "listen";
    string s2 = "Silent";
    clock_t start, stop;

   start = clock();
   if (StringUtil::anagrammCheck(s1, s2) ) {
   stop = clock();

        cout<<"it's an anagramm!"<<endl;
        cout<<"string 1: "<<s1<<" string 2: "<<s2<<"\n\n";
    }
    else
        cout<<"we got 2 different strings"<<"\n\n";

    double time = (double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Running time of the program: "<<time<<"s"<<endl;
    return 0;
}

//improve with ignore lower n bigger case
