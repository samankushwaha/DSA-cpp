#include <iostream>
using namespace std;




int z = 1000; // global variable , can be accessiable anywhere in the int main
int main(){

// for(int i = 0 ; i<5 ; i++){
//     cout<<i;
// }
// cout<<i;




// int a = 5;
// int b;

// a =25;
// cout<<a<<endl;

// int  a=12;//this will not get redefine coz it is already declair previously



// if(true){
//     int a = 25;
//     cout<<a<<endl;
// }
// // cout<<a; not accessable coz as is local variable for upper if


if(true){
    cout<<"inside if no 1"<<endl;
    int a = 202;
    if(true){
        cout<<"inside if no 2"<<endl;
        int  a = 101; // can make another a coz it is inside the nested if 
        cout<<a;
    }
}


cout<<z; // can be accessibale coz it is global variable



    return 0;
}