
//BINARY SEARCHING---------

#include <iostream>
using namespace std;

int binarysearch(int arr[] , int n , int target){
int s = 0 ;
int e = n-1;
int mid = (s+e)/2; //their is some flaw in this line 

while(s<=e){
    //found
    if(arr[mid]==target){
        return mid;
    }

    else if(target > arr[mid]){
        s=mid+1; //here if the target is greater then our mid then our mid will become start point of arry
    }

    else if(target < arr[mid]){
        e = mid-1;//here if the target if smaller then our mid then our end will become mid for going into the left (if ascending order)
    }

    //updating mid MAI YE BHUL JAUNGAAAAAAAAAAAAAAAAA
    mid = (s+e)/2;

}

// if value noi mili then we return incvalid index
return -1;

}


int main (){

int arr[] = {10,20,30,40,50,60,70,75,80,90};
int n = 10;
int target = 90;
int s = 0 ;


int ansindex = binarysearch(arr , n , target);

if(ansindex == -1){
    cout<<"Not found"<<endl;
}

else{
    cout<<"found at index :"<<ansindex<<endl;
}

    return 0;
}