#include<iostream>
using namespace std;

// print
void printarr(int arr[][4] , int col , int row){
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}




//transpose
void transpose(int arr[][4] , int row , int col){
    for(int i =0 ; i<row ; i++){
        for(int j = i ; j<col ; j++)
        swap(arr[i][j],arr[j][i]);
    }


}

int main(){

    int arr[4][4]={
        {4,1,16,8},
        {2,22,0,9},
        {10,4,9,5},
        {7,31,6,9}
    };

int row = 4;
int col = 4;

cout<<"before transposing"<<endl;
printarr(arr , col , row);

cout<<"-----transposing-----"<<endl;
transpose(arr , col , row);

cout<<"print transpose"<<endl;
printarr(arr , col , row);

    return 0;
}  