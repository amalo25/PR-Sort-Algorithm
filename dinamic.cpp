//Program Sorting with PR Algorithm
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100],n,c;
    int *early = arr;
    int *ending=arr+sizeof(arr)/sizeof(arr[0]);
    cin>>n;
    for (int i=0;i<n;i++){
            cout<<"Enter    :   ";
        cin>>arr[i];
    }
    for(int i=n;i>0;i--){
        cout<<*min_element(arr,arr+i)<<endl;
        c=*min_element(arr,arr+i);
        remove (early, ending, c);

    }
}
/* Weakness : Cannot sort same number like {1,2,1,2,3},
   if that number sort with this algorithm the value is {1,2,3} and after that error */


