#include<iostream>
using namespace std;



int findmissingelement(int arr[] , int n ){
    int s = 0 ;
    int e = n-1 ;
    int mid= s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        int diff = arr[mid]-mid;

        if(diff == 1){
            //right mai jao
            s=mid+1;
        }

        else{
            //store the answer
            ans = mid;

            //left jao
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }

    if(ans+1 == 0)
    return n+1;

    return ans+1;
}







int main(){

int arr[] = {1,2,3,4,6,7,8,9};
int n = 8;

int ans=findmissingelement(arr , n);
cout<<"missing element is"<<ans;



    return 0;
}