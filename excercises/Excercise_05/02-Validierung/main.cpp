#include <climits>
#include <iostream>
#include <vector>
#include "treeutil.h"

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> test1 = {20, 12, 34, 9, 19, 29}; //result should be true
  vector<int> test2 = {10, 8, 12, 9}; //result shoud be false
  vector<int> test3 = {10, 8, 12, 4, 15, 9, 16, 2, 5, 4, 18, 8, 14, 10, 8};
  if(TreeUtil::isBinarySearchTree(test3)) {
      cout << "It is a BST!";
     }
      else {
          cout << "It is not a BST";
      }

  return 0;
}


