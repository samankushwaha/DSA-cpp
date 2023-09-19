#include <iostream>
using namespace std;


int binarysearch(int arr[] , int n , int target){
    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;

    while(start<=end){

        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] < target){
            start=mid+1; // coz we ignored the right half of index coz target id already bigger then the target and this array is in the ascending order
        }

        else if(target < arr[mid]){
            end= mid-1;
        }

        mid=(start + end)/2;
    }

    return -1;
}


int main(){

int arr[]={2,4,6,7,8,12,16,22,24,27,30,70};
int n = 12;
int target = 2;


int ans = binarysearch(arr , n , target);

if(ans == -1){
    cout<<"Not found"<<endl;
}

else{
    cout<<"Found at index: "<<ans<<endl;
}


    return 0;
}

