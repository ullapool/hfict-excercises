#include "stringutil.h"
#include <iostream>
#include <string>



using namespace std;



bool StringUtil::checkUniqueness(string s)
{


    for (int i=0; i<s.size();i++)
    {
       for (int j=i+1;j<s.size();j++)
       {

          if(s[i] == s[j])
          {
              cout<<"The letter '"<<s[i]<<"' appears at least more than once"<<endl;
              return false;
          }

          //cout<<s[i]<<":"<<s[j]<<endl;

       }

    }
    cout<<endl;
    return true;
}


// 2. Lösung mit begin() und end()


