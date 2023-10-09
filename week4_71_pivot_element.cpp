#include <iostream>
using namespace std;



//12  14  16  2  4  6  8
//       |__|----> mid



int pivotelement(int arr[] , int n){

int s = 0;
int e = n-1;
int mid = s+(e-s)/2;

while(s<=e){
    
//mtlb ki 16 bada hai 2 se yaha pe 16 pe mid hai
    if(arr[mid]>arr[mid+1]){
        return mid;
    }
//matlb ki  16 bada hai 2 se yaha pe 2 pe mid hai
    else if(arr[mid-1]>arr[mid]){
        return mid-1;
    }


    else if(s==e){//SINGLE ELEMENT LEFT (Corner case)
        return s;
    }



    else if(arr[s]>arr[mid]){//iska mtlb tu B wali line or ho
        e=mid-1;
    }
    else{
        s=mid+1;
    }


    mid=s+(e-s)/2;
}

}




int main(){

int arr[]={12,14,16,2,4,6,8};
int n = 7; 

int ans = pivotelement(arr , n);
cout<<"Pivot element at index : "<<ans;


    return 0;
}