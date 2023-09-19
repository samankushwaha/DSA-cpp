#include <iostream>
using namespace std;

void printarr(int arr[][4] , int row , int col){
    cout<<"Printing row wise array"<<endl;
    for(int i=0 ; i<row ; i=i+1){
        for(int j =0 ; j<col ; j=j+1){

            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}


void colwise(int arr[][4] , int col , int row ){
    cout<<"Printing coloumns wise array"<<endl;
    for(int i = 0 ; i< col ; i++){
        for(int j = 0 ; j<row ; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}


int main(){

int arr[3][4]={
    {5,2,6,9},
    {1,4,1,5},
    {0,4,3,7}
};

int roww = 4;
int coll = 3;

printarr(arr , roww , coll);//will print ROW wise
colwise(arr , roww , coll);//will print COL wise

//-----------------------------------------------------------------------------------------------


//input in 2D array
int qrr[3][3];
int row=3;
int col=3;


for(int i =0 ; i<roww ;i++){
    for(int j=0 ; j<coll ; j++){
        cout<<"Enter input for row index "<<i<<" Enter input for col index "<<j<<endl;
        cin>>qrr[i][j];
    }
}

for(int p = 0 ; p<roww ; p++){
    for(int q = 0 ; q<coll ; q++){
        cout<<qrr[p][q]<<" ";
    }
    cout<<endl;
}



    return 0;
}




