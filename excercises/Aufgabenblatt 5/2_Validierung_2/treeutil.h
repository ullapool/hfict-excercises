#ifndef TREEUTIL_H
#define TREEUTIL_H
#include <vector>

using namespace std;

// INT_MIN is treated as empty node
// returns false if child == parent
class TreeUtil {
private:
  static bool isBinarySearchTree(vector<int> values, int startNode, int min, int max);

public:
  static bool isBinarySearchTree(vector<int> values);
};

#endif // TREEUTIL_H
