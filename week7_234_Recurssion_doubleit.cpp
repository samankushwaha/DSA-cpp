#include <iostream>
using namespace std;

void doubleit(int arr[] ,  int size , int index){
//base case
    if(index >= size){
        return;
    }

//processing
    arr[index] = arr[index]*2;

    //recurssive call
doubleit(arr , size , index+1);
}




int main(){

int arr[]={10,20,30,40,50};
int size = 5;
int index = 0;

doubleit(arr , size , index);

//printing the array
for(int a:arr){
    cout<<a<<" ";
}
    return 0;
}