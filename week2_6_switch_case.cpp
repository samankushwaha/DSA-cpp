#include <iostream>
using namespace std;

int main(){

//SWITCH CASE----------------------------------------
float a , b ;
int op ;
cout<<"Enter 2 numbers";
cin>>a>>b;
cout<<"Enter the operation";
cin>>op;

switch (op){
    case 0:
    cout<<"add case: ";
        cout<< a+b;
        break; // this is mandatory

    case 1:
    cout<<"subtract case: ";
        cout<<a-b;
        break;

    case 2:
    cout<<"into case: ";
        cout<<a*b;
        break;

    case 3:
    cout<<"divide case: ";
        cout<<a/b;
        break;

    default:
    cout<<"Invalid expression!!!"<<endl;
}






//IF ELSE-----------------------------------------------
// float a , b ;
// cout<<"Enter 2 numbers";
// cin>>a>>b;

// char op;
// cout<<"Enter the operation you want to do";
// cin>>op;

// if(op=='+'){
//     cout<<"answer is"<<a+b;
// }

// else if(op=='-'){
//     cout<<"answer is"<<a-b;
// }

// else if(op=='*'){
//     cout<<"answer is"<<a*b;
// }

// else if(op=='/'){
//     cout<<"answer is"<<a/b;
// }

// else {
//     cout<<"INVALID OPERATION";
// }








    return 0;
}