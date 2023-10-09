#include <iostream>
using namespace std;

int main(){

int arr[5] ={1,2,3,4,5};

//pointer to an arry
// int* ptr1 = arr;

int * prr[3]; //POINTER OF AN ARRAY

int (*ptr)[5] = &arr; //-->right syntac to pointer to an ARRAY
cout<<(*ptr)[1];


    return 0;
}