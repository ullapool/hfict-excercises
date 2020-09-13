#include <iostream>
#include <ctime>
//Aufgabe: Welche Laufzeit hat der folgende Code
//Es ergibt sich eine Lineare Laufzeit. O(2n) == O(n), it takes the same time.
//O(n) and O(1) dont contribute as they have no significant effect.

using namespace std;


void foo(int *array, int size)
{
    int sum = 0;
    int product = 1;

    for (int i=0; i<size; i++)
    {
        sum +=array[i];

    }

    for (int i=0;i<size;i++)
    {
        product *=array[i];

    }
    cout<<"Sum = "<<sum<<" Product = "<<product<<endl;

}
int main()
{   int size = 10;                 //max number is 16, after that I get - Number or 0
    int array [size];

    clock_t start, stop;
    for (int i=0;i<size;i++)
    {                           //int counter(333);
        array[i] = i+1;         //i= 1; -->array[i-1] = i;
                                //counter+=10;
    }

    start=clock();

    foo(array, size);
    stop=clock();

    double time =(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Das Program benoetigte "<<time<<"!"<<endl;
    return 0;
}
