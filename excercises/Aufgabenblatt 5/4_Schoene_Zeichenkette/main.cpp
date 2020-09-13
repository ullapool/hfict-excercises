#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

int calculate(string input);

int main()
{
    string input = "ABBCCC";
    //string input = "Sometimes test cases are hard to make up";
//  cout<<"Enter a string: ";
//  getline (cin, input);

    cout<<"Schoenheit: "<<calculate(input)<<endl;


    return 0;
}


int calculate(string input){
   unsigned int sum = 0;
   vector<int> chars(26);
     for(auto const& c : input) {
       //chars.at(c)++;
         cout<<c<<" : "<< ++chars[toupper(c) -'A' ]<<" | ";
       //chars[tolower(c) - 'a']++;
     }
       cout<<"\n\n";
       sort(chars.rbegin(), chars.rend()); // reverse and sort otherwise it'll start with value 0
       for(unsigned int i = 0; i < chars.size(); ++i) {
           if(chars[i] == 0) {
              cout<<"break"<<endl;
              break;
            }
            cout<<i<<": "<<chars[i]<<" = ";
            sum += chars[i] * (26 - i);
            cout<<sum<<endl;
        }
        return sum;
}
