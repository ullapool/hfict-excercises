#include <iostream>
#include <treeutil.h>
#include <vector>

using namespace std;

int main()
{

    //vector<int> value {40, 100, 200, 20, 40, 70, 80, 50, 10};
    vector<int> value {40, 100, 200, 20};


    TreeUtil::printMaximumPass(value);

    return 0;
}
