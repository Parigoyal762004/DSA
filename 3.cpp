//finding pivot in rotated sorted array basically minimum element with least time complexity her o(logn) so using binary search and changing the logic of mid
#include <iostream>
using namespace std;
int findpivot(int arr[], int n){


    int s=0, e=n-1;
    int mid= s+(e-s)/2;  //to maintain time complexity
    int ans=-1;

    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s= mid+1;
        }
        else {
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}
int main() {
    int even[6]={3,4,5,1,2,2};
    cout << "peak of array is at " << findpivot(even,6)<<endl;
    
    return 0;
}

