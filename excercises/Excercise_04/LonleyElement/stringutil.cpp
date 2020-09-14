#include "stringutil.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

char StringUtil::getLonleyElement(string input)
{
    vector<int> vec (128); // with option 2 can vec size be 26, but no special char like: - ! etc)

    for (char &c : input){
        cout<<c<<": "<<++vec.at(c)<<", ";
        //option 2: vec[tolower(c) - 'a']++;
    }
    cout<<endl;

    cout<<"\n\n";
    for (unsigned int i = 0; i < vec.size(); i++){
        cout<<vec.at(i)<<", ";
          if (vec.at(i) == 1) {
              return static_cast<char>(i); //with option 2 add: +'a'
          }
    }


    return 0;

}
