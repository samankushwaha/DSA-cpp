#include<iostream>
using namespace std;


bool searcharray(int arr[] , int size , int index ,  int target){
    //base case
    if(index >= size){
        return false;
    }

    if(arr[index] == target){
        return true;
    }

//recursive call
bool ans = searcharray(arr , size , index+1 , target);
return ans;


}

int main(){

int arr[]={10 , 20 , 30 , 40 , 50};
int size = 5;
int index = 0;
int target = 50;

cout<<"target found "<<searcharray(arr , size , index , target)<<endl;
    return 0;
}