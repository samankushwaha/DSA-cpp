#include <iostream>
using namespace std;



int findLASToccurance(int arr[] , int n , int target){

    int s =0;
    int e = n-1;
    int m = (s+e)/2;

    //Good practice
    // int mid = s+(e-s)/2;

    int ans = -1;

    while(s<=e){
        if(arr[m] == target){
            //storing the answer
            ans = m;

            //making mid next starting point(RIGHT mai)
            s = m+1;//ONLY CHANGE IN SINGLE LINE OF CODE FOR LAST OCCURANCE AND FIRST OCCURANCE
        }

        else if(arr[m] < target){
            s = m+1;
        }

        else if(arr[m]> target){
            e = m-1;
        }
//hamesha galti hogi mid upadate hoga yaha pe
        m=(s+e)/2;
    }
    return ans;


}
int main(){


int arr[] = {10,20,20,30,30,30,30,75,80,90};
int n = 9;
int target = 30;
int s = 0 ;


int ansindex = findLASToccurance(arr , n , target);

if(ansindex == -1){
    cout<<"Not found"<<endl;
}

else{
    cout<<"found at index :"<<ansindex<<endl;
}


    return 0;
}