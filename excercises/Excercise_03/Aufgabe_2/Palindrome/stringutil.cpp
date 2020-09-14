#include "stringutil.h"
#include <string>
#include <algorithm>
#include <iostream>


using namespace std;

bool StringUtil::isPalindrome(string input){


    //remove spaces
    input.erase (remove_if(input.begin(), input.end(), ::isspace), input.end()); //:: otherwise not working

    //remove comma's
    input.erase (remove(input.begin(), input.end(), ','), input.end()); //no_if like above!!
    //make all letters lowercase
    transform (input.begin(), input.end(), input.begin(), towlower);

    cout<<input<<endl;


    if (input.length() <= 1)

        return true;

        if(input[0] == input[input.length() -1])
        return  isPalindrome(input.substr(1, input.length()-2));

    return false;

}

bool StringUtil::nonRecursivSolution(string input){

    string checkWord = input;
    checkWord.erase (remove(checkWord.begin(), checkWord.end(), ','), checkWord.end() );
    transform (checkWord.begin(), checkWord.end(), checkWord.begin(), towlower);
    checkWord.erase (remove_if(checkWord.begin(), checkWord.end(), ::isspace), checkWord.end());

   cout<<checkWord<<endl;
    for(int i = 0; i < checkWord.size(); i++){
        if(checkWord.at(i) != checkWord.at(checkWord.size() -1 -i) ){
            return false;
        }
    }
    return true;

}
