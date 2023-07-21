//peak index in mountain array eg 0,2,1,0  3,4,5,1 basically find the max element pehle elments increase fir decrease left lope arr[i]<arr[i+1] and > for right lope and for peak arr[i-1]<arr[i]>arr[i+1]
#include <iostream>
using namespace std;
int findpeak(int arr[], int n){


    int s=0, e=n-1;
    int mid= s+(e-s)/2;  //to maintain time complexity
    int ans=-1;

    while (s<e)
    {
        if (arr[mid]<arr[mid+1])
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
    int even[6]={3,4,5,6,1};
    cout << "peak of array is at " << findpeak(even,6)<<endl;
    
    return 0;
}