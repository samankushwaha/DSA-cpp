// 23,-7,12,-10,-11,40,60     --->     -7 -10 -11 23 12 40 60 
//   shifting all the -ve values to one side 
//   using one pointer and one looping variable 


#include <iostream>
using namespace std;

void shiftnegativeoneside(int arr[] , int n){
    int j=0;
    //j is a memory block where we stors the -ve values

    for(int index = 0 ; index<n;index++){
        if(arr[index]<0){
            swap(arr[index] , arr[j]);
            j++;
        }
    }
}

int main(){

int arr[]={23,-7,12,-10,-11,40,60};
int n = 7;

shiftnegativeoneside(arr,n);


cout<<"Printing the array"<<endl;
for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}
