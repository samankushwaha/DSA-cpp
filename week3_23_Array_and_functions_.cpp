//ARRAYS WITH FUNCTIONS

#include <iostream>
#include <limits.h>//this liabraray have 2 utilitys which is max_num and min_num
using namespace std;


//-----------------1------------------
//printing an array---
//it is mandatory to define search in function parameter
void printarray(int arr[] , int size){
    for(int i =0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


//-----------2------------------
//linear search---
//present - true
//absent - false
bool linearsearch(int brr[] , int sizee , int target ){
    for(int i = 0 ; i < sizee ; i++){
        if(brr[i]==target){
            return true;
        }
    }
    return false;
}

//--------------4------------------

int findminval(int drr[] , int sizze){
    //ans stores variable
    int minans = INT_MAX;

    for(int i = 0 ; i<sizze ; i++){
        if(drr[i]<minans){ //here if the arr[i] is smaller than minans then it will stores in minans and the loop will continue to compare the whole arry to fins the minimum
            minans = drr[i];

        }
    }

    return minans;
}

//-------------------5------------------------------

void reversearr(int qrr[] , int ssize){

//while loop
    // int left=0;
    // int right=ssize-1;

    // while(left<= right){
    //     swap(qrr[left] , qrr[right]);
    //     left++;
    //     right--;
    // }

//for loop
int left = 0;
int right = ssize-1; 
    for(int left= 0 , right=ssize-1 ;left<=right;left++,right--){
        swap(qrr[left] , qrr[right]);
    }

    //print the array;
    for(int i = 0 ; i<ssize ; i++){
        cout<<qrr[i]<<" ";
    }

}



int main(){

//--------1-----------------
int arr[5]={2,3,5,34,24};
int size = 5;
printarray(arr , size);

//---------------2------------------
int brr[5]={19,3,8,20,43};
int sizee = 5;
int target = 20;
bool ans = linearsearch(brr ,sizee , target);

if (ans == 1){
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}


//---------------3------------------

//count the numbers of 1 and 0 from the array and skip any other numbers
int zero = 0;
int one = 0;

int zrr[10];
int n = 10;
for(int i = 0 ; i < n ; i++){
    cout<<"(kindly enter only 0 and 1) Enter for index : "<<i<<" ";
    cin>>zrr[i];
}

for(int i = 0 ; i<n ; i++){
    cout<<zrr[i]<<endl;
    if (zrr[i]==0){
        zero++;
    }
    else if(zrr[i]==1){
        one++;
    }
    else{
        continue;
    }
}
cout<<"the total numbers of zeros are"<<zero<<endl;
cout<<"the total numbers of ones are"<<one<<endl;



//-------------------4----------------------------

//Find the minimumm value from an array
int drr[]={88,32,3,7,10,2,16,4,9};
int sizze = 9;

int minimum = findminval(drr, sizze);
cout<<"minimum number is "<<minimum;

//--------------5-----------------

cout<<"reverse array";
int qrr[6]={10,20,30,40,50,60};
int ssize = 6;

reversearr(qrr,ssize);

    return 0;
}
