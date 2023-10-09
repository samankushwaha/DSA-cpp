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

//----------------------------------first occurance-------------------------

int findfirstoccurance(int arr[] , int n , int target){

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

            //making mid next end point(left mai)
            e = m-1;
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

//--------------------------------total occurance----------------------------------------------

int findtotaloccurance(int arr[] , int n , int target){
    int firstocc=findLASToccurance(arr , n , target);
    int lastocc=findfirstoccurance(arr , n , target);
    int total = lastocc-firstocc+1;
    return total;
}



int main(){


int arr[] = {10,20,20,30,30,30,30,75,80,90};
int n = 9;
int target = 30;
int s = 0 ;


// int ansindex = findLASToccurance(arr , n , target);
// int ansindex = findfirstoccurance(arr , n , target);

int anns = findtotaloccurance(arr , n , target);
    cout<<"Total occurance is"<<anns<<endl;




    return 0;
}


ERRORRRRRRRRRRRRRRRRRRRRRRRR haiiiiiiiiii kuchhhhhhhhhhhh maybeeeeeeeeeeee
