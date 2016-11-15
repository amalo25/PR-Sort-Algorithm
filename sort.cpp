//Program Sorting with PR Algorithm
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={2,8,4,1,9},sizeofarr=sizeof(arr)/sizeof(arr[0])-1,c; //Declaration
    int *early = arr;
    int *ending=arr+sizeof(arr)/sizeof(arr[0]);
    for(int i=sizeofarr;i>=0;i--){
        c=*min_element(arr,arr+i); // Value of C is min number from array of arr
        cout<<c; //Print number to display
        remove (early, ending, c); //Remove min number after print on display
    }
    return 0;
}
/* Weakness : Cannot sort same number like {1,2,1,2,3},
   if that number sort with this algorithm the value is {1,2,3} */


