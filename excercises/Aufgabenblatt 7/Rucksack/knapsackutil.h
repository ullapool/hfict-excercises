#ifndef KNAPSACKUTIL_H
#define KNAPSACKUTIL_H
#include <vector>
#include "fooditem.h"
using namespace std;


class KnapsackUtil
{
    static vector<FoodItem> solveProblem(vector<FoodItem>& foodlist, int payloadLimit);
};

#endif // KNAPSACKUTIL_H
