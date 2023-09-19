#include <iostream>
using namespace std;



//Printing array--------1
// void printarr(int arr[][3] , int col , int row){
//     for(int i = 0 ; i<row ; i++){
//         for(int j =0 ; j<col ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


int main(){


// 2D array initialization
// int arr[5][6]={
//     {3,4,5},
//     {6,1,2},
//     {0,2,1},
//     {8,5,3},
// };

// int arr1[]={1,5,2,7,6};
// cout<<arr[3];

//----------------------------------------------------------------------------------------------------------

//MUST I
// int brr[][]={
//     {4,7,1},
//     {8,8,2},//----> this will give an error coz there are no input parameters defined in it
//     {9,11,5}
// };

// int crr[][3]={
//     {4,7,1},
//     {8,8,2},//----> u should atleat define its coloumn parameter
//     {9,11,5}
// };


//----------------------------------------------------------------------------------------------------------

// //PRINTING array------1
// int arr[4][3]={
//     {7,4,5},
//     {6,7,2},
//     {0,2,7},
//     {7,5,3},
// };


// int row = 4;
// int col = 3;
// printarr(arr , row , col);

//-------------------------------------------------------------------------------------------------------------------

//input 2D array
int qrr[3][3];
int col=3;
int row=3;


for(int i =0 ; i<row ;i++){
    for(int j ; j<col ; i++){
        cout<<"Enter input for row index"<<i<<"Enter input for col index"<<j<<endl;
        cin>>qrr[i][j];
    }
}




    return 0;
}


