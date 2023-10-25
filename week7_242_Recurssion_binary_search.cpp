#include<iostream>
using namespace std;

int binarysearch(int arr[] , int s , int e , int target){
    //base case
    if(s>e){
        //element not found
        return -1;
    }

    // processing
    int mid = s+(e-s)/2;
    if(arr[mid]==target){
        return mid;
    }

    //now baki ka recurssion dekhega
    if(arr[mid]>target){
        e=mid-1;
        int agekaans = binarysearch(arr , s , e , target);
        return agekaans;
    }
    else{
        s=mid+1;
        int agekaans = binarysearch(arr , s , e , target);
        return agekaans;

    }

}


int main(){

int arr[]={10,20,30,40,50,60};
int target =  50;
int size=6;
int s = 0;
int e = size-1;

cout<<binarysearch(arr ,s , e, target);


    return 0;
}