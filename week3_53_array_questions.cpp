#include <iostream>
using namespace std;


// 2,0,2,1,1,0 ---? 0 0 1 1 2 2
//making 2 pointers left & right and a looping variable index
//if index==0 swap index with left ,  if index==2 swap index with right , and ignore 1


int main(){

int arr[] = {2,0,2,1,1,0};
int n = 6;

int left = 0 ;// for storing 0
int right = n-1; // for storing 2
int index = 0; // looping variable

cout<<"sorting 1 , 2 , 0"<<endl;
while(index<=right){
    if(arr[index]==0){
        swap(arr[index] , arr[left]);
        left++;
        index++;
    }

    else if(arr[index]==2){
        swap(arr[index] , arr[right]);
            right--;
    }

    else{
        index++;
    }

}

cout<<endl<<"Printing the array"<<endl;
for(int i = 0 ; i<n ; i++){
    cout<<arr[i];
}

return 0;


}