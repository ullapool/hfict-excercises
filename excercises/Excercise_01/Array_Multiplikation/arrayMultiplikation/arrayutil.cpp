#include "arrayutil.h"
#include <iostream>

using namespace std;

/*In dieser Aufgabe soll eine Methode implementiert werden, welche als Parameter einen Array enthält
Das Resultat ist ein Array der gleichen Gr ̈osse. Jedes Element dieses Arrays beinhaltet die Multiplikation
aller Elemente (ausser sich selbst) des Input Arrays.
Beispiel:
Input Array:{12, 4, 7, 3}
Output Array:{4*7*3, 12*7*3, 12*4*3, 12*4*7} = {84, 252, 144, 336}
ACHTUNG: Der Divisionsoperator darf in dieser Aufgabe NICHT verwendet werden!*/


long *ArrayUtil::muliplyArrayValues(const long *values, const int ARRAY_SIZE)
{
    long *product = new long[ARRAY_SIZE];

    //long product[ARRAY_SIZE];
    for (int i=0; i<ARRAY_SIZE; i++)
    {    product[i] = 1; //set temporary to 1, to avoid multiply with 0.

        for (int j=0; j<ARRAY_SIZE; j++)
        {
            if(i != j)
            {
                product[i] *= values[j];   //multplication
                cout<<values[j];

            }
                //output
                if(i!= j && j<3)
                cout<<"*";
         }
                if (i<3)
               cout<<" | ";
    }


    return product;
}


