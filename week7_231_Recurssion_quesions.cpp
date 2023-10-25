

//how many ways r their to clim the stairs
#include<iostream>
using namespace std;

int climbstais(int n){
    if(n == 0){
        return 1; // RETURN 1 isliye kyuki stair 1 pe jane k liye ek hi tarika hai ki jump mardo on the same stair
    }
    if(n == 1){
        return 1;
    }
    int ans = climbstais(n-1) + climbstais(n-2);
}


int main(){

int n = 3;
cout<<climbstais(n);

    return 0;
}