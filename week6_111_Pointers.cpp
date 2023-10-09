#include<iostream>
using namespace std;


int main(){

int a = 10;
cout<<a<<endl;
cout<<"address of a: "<<&a<<endl;


//Pointer creation
int* ptr = &a;

//accessing value stored at address stored in ptr
cout<<ptr<<endl;

cout<<"Accessing"<<*ptr<<endl; // * is a dereference operator

cout<<&ptr<<endl;//address of ptr

//size of
//address of every datatype will be same if u working with POINTERS

cout<<sizeof(ptr)<<endl;

char ch = 'k';
char* cptr = &ch;
cout<< sizeof(cptr)<<endl;


//null pointerssssss
// int* ptr = 0;
// cout<<*ptr<<endl;


    return 0;
}