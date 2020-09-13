#include <iostream>
#include "stringutil.h"
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a = "111ababc";
    string b = "xdbabcdv";

    string substring = StringUtil::lcs(a, b);
    cout<< substring<<endl;

    return 0;
}
