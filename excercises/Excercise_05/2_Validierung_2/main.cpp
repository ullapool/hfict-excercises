#include <climits>
#include <iostream>
#include <vector>
#include "treeutil.h"

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> myTree = {20, 12, 34, 9, 19, 29}; // Aufgabe 5.2
  cout << TreeUtil::isBinarySearchTree(myTree);
  cout << endl;

  return 0;
}


