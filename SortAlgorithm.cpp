#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    //Declaration and Inisialisation
   	int arr[] = {1,12,15,88,42,99,100,2,15,19,2,3,1,5,7,8,3,1,10,20,21,32,43,21,54,322,12,32,34,56,76,54,32,12,23,43,54,78,98,45,32,12,11,14,15,12,33,44,55,50},sum=0;
	int sizeofarr = sizeof(arr)/sizeof(arr[0]),c;
    	int *early = arr;
    	int *ending = arr+sizeof(arr)/sizeof(arr[0]);
    
    //Process and Finalisation
    		for(int i=sizeofarr;i>0;i-=sum){
        		c=*min_element(arr,arr+i);    // Value of C is min number from array of arr
        		sum=count(arr,arr+i,c);      //Count how many times c(minimal value in array) in arr
        			for(int e=1;e<=sum;e++){
            			cout<<c<<ends;
                    }

			remove (early, ending, c);       //Remove min number after print on display
			}

    return 0;
}
