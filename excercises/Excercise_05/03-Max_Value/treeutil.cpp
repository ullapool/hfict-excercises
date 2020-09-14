#include "treeutil.h"
#include <vector>
#include <algorithm>
#include <iostream>

void TreeUtil::printMaximumPass(vector<int> value)
{
 //{40, 100, 200, 20};
    unsigned int idx = value.size() -1;

    vector<int> bestPath;
    int bestSum = 0;

    while (idx > 0) {
        // Wir wollen nur Leaf-Nodes
        if (idx * 2 + 1 >= value.size() && idx * 2 + 2 >= value.size()) {
            int tmpIdx = idx;
            vector<int> tmpPath;
            int tmpSum = 0;
            while (tmpIdx > 0) {
                cout << "tmpIdx 1: " <<tmpIdx << endl;
                cout << " idx: " <<idx<<endl;
                tmpPath.push_back(value.at(tmpIdx));
                tmpSum += value.at(tmpIdx);
                cout<<"tmpSum: " << tmpSum<<endl;

                int leftOrRight = (idx % 2 == 1 ? 1 : 2);
                tmpIdx = (tmpIdx - leftOrRight) / 2;
                cout<<"tmpIdx 2 : "<<tmpIdx<<endl;
            }
            tmpPath.push_back(value.at(0));
            tmpSum += value.at(0);

            if(tmpSum > bestSum) {
                bestSum = tmpSum;
                std::reverse(tmpPath.begin(), tmpPath.end());
                bestPath = tmpPath;
            }
        }
        else {
            break;
        }
        idx--;
    }

    cout << "Beste Summe: " << bestSum << endl;
    cout << "Pfad dort hin: ";
    for (int const & v : bestPath) {
        cout << "-->" << v;
    }
    cout << endl;
}
