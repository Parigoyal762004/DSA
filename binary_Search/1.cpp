// first and last position or occurance of an element in sorted array. divide in two parts left and right occurance,eg 1 2 3 3 5 is array mid is 3 basically check three conditions ==, < and >

#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid= s+(e-s)/2;  //to maintain time complexity
    int ans=-1;

    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if (key < arr[mid])
        {//right mein jao
        s=mid+1;
            
        }
        else if (key > arr[mid])
        {// left mein jao
            e=mid-1;
        }
         mid= s+(e-s)/2;  //updating mid
    }
    return s;
}

int lastOcc(int arr[], int n, int key){
    int s=0, e=n-1;
    int mid= s+(e-s)/2;  //to maintain time complexity
    int ans=-1;

    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if (key < arr[mid])
        {//right mein jao
        s=mid+1;
            
        }
        else if (key > arr[mid])
        {// left mein jao
            e=mid-1;
        }
         mid= s+(e-s)/2;  //updating mid
    }
    return ans;
}
int main() {
    int even[5]={1,2,3,3,4};
    cout << "first occurrence of 3 is at " << firstOcc(even,5,3)<<endl;
    cout << "last occurrence of 3 is at " << lastOcc(even,5,3)<<endl;
    return 0;
}


// anthor question could be total number of occurence which can could be found usinf formula (last index-first index)+1 basically because array is sortede