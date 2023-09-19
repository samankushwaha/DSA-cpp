#include <iostream>
using namespace std;


void sum(int arr[][4] , int row , int col){
    cout<<"Printing row wise array"<<endl;
    for(int i=0 ; i<row ; i=i+1){

        int sum=0;

        for(int j =0 ; j<col ; j=j+1){

            sum = sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void print(int arr[][4] , int col , int row){
    cout<<"diagonal print";
    for(int i = 0 ; i<row ; i++){
        cout<<arr[i][i]<<endl;;
    }
}


int main(){

int arr[3][4]={
    {10,20,5,7},
    {2,4,6,8},
    {10,15,1,10}
};

int row = 3;
int col = 4;

sum(arr , row ,col);
print (arr , row ,col);


    return 0;
}