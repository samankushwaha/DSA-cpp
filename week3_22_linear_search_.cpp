
//-----LINEAR SEARCH-----

#include <iostream>
using namespace std;

int main(){

//SINGLE ARRAY
// int arr[5]={3,4,16,10,66};
// int target = 10;


// bool flag = 0;//it will work as a indicator if flag = 1 found else ot foung

// int n = 5;
// for(int i = 0 ; i<n ; i++){
//     if(arr[i]==target){
//         flag = 1;
//         break;
//     }
// }

// if(flag == 1){
//     cout<<"found";
// }
// else{
//     cout<<"not found";
// }





// 2D ARRAY --linear search

int arr[4][4]={
    {2,6,11,9},
    {1,6,21,7},
    {5,3,6,65},
    {7,9,3,2}
};
int row = 4;
int col = 4;
int target = 7;
bool flag = 0;

for(int i = 0 ; i<row ; i++){
    for(int j = 0 ; j<col ; j++){
        if(arr[i][j]==target){
            //if found , return true
            flag = 1;
        }
    }
}
if(flag == 1){
    cout<<"target has been found "<<target;
}
else{
    cout<<"target is not found ";
}



    return 0;
}