#include "stringutil.h"
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


bool StringUtil::anagrammCheck(string s1, string s2)
{

    if ( s1.size() != s2.size() ){
        cout<<"strings don't have the same length!"<<endl;
        return false;
    }
    //make all char charachter to low case char. upper would be  " toupper"
    transform ( s1.begin(), s1.end(), s1.begin(), ::tolower );
    transform ( s2.begin(), s2.end(), s2.begin(), ::tolower );

    sort( s1.begin(), s1.end() );
    sort( s2.begin(), s2.end() );

    cout<<"Strings after being sorted:"<<endl;
    cout<<s2<<" and "<<s1<<"\n\n";
    if( s1==s2 ){

        return true;
    }
    else
        return false;






}
