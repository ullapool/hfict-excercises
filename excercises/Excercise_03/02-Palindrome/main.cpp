#include <iostream>
#include <stringutil.h>
using namespace std;

int main()
{
    string input = "A man, a plan, a canal Panama";

    //nonRecursivSolution

    if ( StringUtil::isPalindrome(input) ) {


        cout<<" is a Palidrome"<<endl;

    }else
        cout<<input<<" is not a Palidrome"<<endl;


    return 0;
}
