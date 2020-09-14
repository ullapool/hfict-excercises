#include "treeutil.h"
#include <climits>
#include <iostream>
#include <vector>

using namespace std;
//20, 12, 34, 9, 19, 29
bool TreeUtil::isBinarySearchTree(vector<int> values) {
  return isBinarySearchTree(values, 0, INT_MIN, INT_MAX);
}

bool TreeUtil::isBinarySearchTree(vector<int> values, int startNode, int min, int max) {
  // Check root
    cout << "here" <<endl;
  int root = values.at(startNode);
  cout<< "min: " <<min <<endl;
  cout << "max: " <<max <<endl;
  if (root <= min || root >= max) return false;

  // Get children
  int leftIndex = 2 * startNode + 1;
  int left = (leftIndex < values.size()) ? values.at(leftIndex) : INT_MIN;
  cout<<"left: "<<left<<", ";
  int rightIndex = 2 * startNode + 2;
  int right = (rightIndex < values.size()) ? values.at(rightIndex) : INT_MIN;
   cout<<" | right: "<<right<<", ";
  // Check left
  if (left != INT_MIN) {
    if (isBinarySearchTree(values, leftIndex, min, root) == 0) return false;
  }

  // Check right
  if (right != INT_MIN) {
    if (!isBinarySearchTree(values, rightIndex, root, max)) return false;
  }
   cout << endl;
  return true;
}
