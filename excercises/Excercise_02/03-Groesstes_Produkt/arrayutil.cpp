#include "arrayutil.h"
#include <iostream>
#include <algorithm>

using namespace std;

int ArrayUtil::highestProduct(int *values, const int ARRAY_Size){


    //check if negative number are in the array
    int counter(0);
    int checkNeagtive(0);

    for(int i=0;i<ARRAY_Size;i++){

        if(values[i]<0)  {
            counter++;
        }
    }

    if(counter >= 2){

        cout<<"The Array contains at least 2 negative numbers"<<endl;
    }



    sort(values, values + ARRAY_Size );


    checkNeagtive = values[0] * values[1] * values[ARRAY_Size-1];

    int product =values[ARRAY_Size-1] * values[ARRAY_Size-2] * values[ARRAY_Size-3] ;

    if(product > checkNeagtive){
        return product;
    }
    else return checkNeagtive;

}
//Complexity: O(n log n) = Good!


// sorting with bubble sort -> not working with negative numbers
//for (int i=0; i<ARRAY_Size-1; i++){
//    if (values[i] > values[i+1] || values[i+1] < 0){
//        int temp = values[i];
//        values[i] =values[i+1];
//        values[i+1] = temp;
//    }
//}

//for(int i=0; i<ARRAY_Size;i++){
//    cout<<values[i]<<" , ";

