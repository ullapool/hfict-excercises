#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class StringUtil
{
public:
    bool static anagramChecker(string a, string b);
};

bool StringUtil::anagramChecker(string a, string b) {

    if(a.length() != b.length()) {return false;}
    a.erase(remove_if(a.begin(), a.end(), ::isspace), a.end());
    b.erase(remove_if(b.begin(), b.end(), ::isspace), b.end());
    int *check1 = new int[26]();
    int *check2 = new int[26]();

    for(unsigned int i = 0; i < a.length(); i++) {
        check1[tolower(a.at(i) - 'a')]++;
        check2[tolower(b.at(i) - 'a')]++;
    }
     for(int i = 0; i < 26; i++) {
         cout<<i<<"= "<<check1[i]<<", ";
         if(check1[i] != check2[i]) {
            return false;
         }

      }
      return true;
}

int main()
{
    string a = "axl rose";
    string b = "oral sex";

    cout << StringUtil::anagramChecker(a, b);
    return 0;
}
