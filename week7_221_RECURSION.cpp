#include <iostream>
using namespace std;

int fac (int n){

    //base case
    if(n == 1){
        return 1;
    }
    if (n ==0){
        return 1;
    }
    

    //recursive relation
    int recursionKAns= fac(n-1); // yaha call aya hai function ka jo hoga n-1


    //processing
    int facans = n* recursionKAns;
    return facans;

}

int main(){

int n = 5;
cout<<fac(n);

    return 0;
}