#include <iostream>
using namespace std;

int fib(int n){
    //base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    int ans  = fib(n-1) + fib(n-1);
    return ans;
}


int main(){

cout<<fib(7)<<endl;


    return 0;
}