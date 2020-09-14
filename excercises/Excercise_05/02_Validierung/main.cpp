#include <iostream>
#include <vector>

using namespace std;

class TreeUtil {
private:
    static bool isBinarySearchTree2(vector<int> value, int currentIndex);
    static bool isBinarySearchTree(vector<int> value, int currentIndex);
public:
    static bool isBinarySearchTree(vector<int> values);
};

bool TreeUtil::isBinarySearchTree(vector<int> values) {
    return isBinarySearchTree(values, 0);
}

bool TreeUtil::isBinarySearchTree(vector<int> value, int currentIndex) {
    if(currentIndex >= value.size())
        return true; // wenn mein parent ein Leaf ist komme ich hier rein, als ich gar nicht existiere

    int current = value.at(currentIndex);
    int leftIndex = 2 * currentIndex + 1;
    int rightIndex = 2 * currentIndex + 2;

    if(leftIndex < value.size() && value.at(leftIndex) > current)
        return false;

    if(rightIndex < value.size() && value.at(rightIndex) < current)
        return false;

    return isBinarySearchTree(value, leftIndex) && isBinarySearchTree(value, rightIndex);


}

bool TreeUtil::isBinarySearchTree2(vector<int> value, int currentIndex) {
    int current = value.at(currentIndex);
    int leftIndex = 2 * currentIndex + 1;
    int rightIndex = 2 * currentIndex + 2;

    if(leftIndex < value.size()) {
        if(value.at(leftIndex) > current || !isBinarySearchTree2(value, leftIndex)) //wenn einer der beiden false sind dann muss nicht mehr weiter gesucht werden.
            return false;
    }
    if(rightIndex < value.size()) {
        if(value.at(rightIndex) < current || !isBinarySearchTree2(value, rightIndex)) //wenn einer der beiden false sind dann muss nicht mehr weiter gesucht werden.
            return false;
    }
    return true;

}

int main()
{
    vector<int> bst1 = {20, 12, 34, 9, 19, 29};     //true
    vector<int> bst2 = {20, 12, 34, 9, 19, 29, 8};  //False
    vector<int> bst3 = {10, 12, 34, 9, 19, 29};     //false
    vector<int> bst4 = {20, 12, 34, 9, 19, 29, 35}; //true

    cout <<"Expected: True,  Actual: " << (TreeUtil::isBinarySearchTree(bst1) ? "True" : "False") << endl;
    cout <<"Expected: False, Actual: " << (TreeUtil::isBinarySearchTree(bst2) ? "True" : "False") << endl;
    cout <<"Expected: False, Actual: " << (TreeUtil::isBinarySearchTree(bst3) ? "True" : "False") << endl;
    cout <<"Expected: True,  Actual: " << (TreeUtil::isBinarySearchTree(bst4) ? "True" : "False") << endl;
 return 0;
}


























//int root = value.at(startNode);
//if(root <= min || root >= max) return false;

//int leftIndex = 2 * startNode + 1;
//int left = (leftIndex < value.size() ? left = value.at(leftIndex) : INT_MIN);
//if(left != INT_MIN) {
//   if(!isBinarySearchTree(value, leftIndex, min, root)) return false;
//}

//int rightIndex = 2 * startNode + 2;
//int right = (rightIndex < value.size() ? right =value.at(rightIndex) : INT_MIN);
//if(right != INT_MIN) {
//    if(!isBinarySearchTree(value, rightIndex, root, max)) return false;
//}
//return true;
