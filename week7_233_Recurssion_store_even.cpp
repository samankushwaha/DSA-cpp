#include<iostream>
#include<vector>
using namespace std;

void even(int arr[] ,int index,int size, vector<int>&ans){
    //base case
    if(index >=size){
        return ;
    }

    //procesing
    if(arr[index]%2==0){
        ans.push_back(arr[index]); // yaha pe hum vector k andar even values insert kar rahe hai
    }
    
    //Recurssive call
    even(arr , index+1 , size , ans);
}


int main(){

int arr[]={1,2,4,7,12,18,15};
int index = 0;
int size = 7;

vector<int>ans;

even(arr ,index ,size ,ans);


//printing vector usign for each loop
for(int num:ans){ //---> its just like (for num in ans) that i had learned in python
    cout<<num<<" ";
}

    return 0;
} 