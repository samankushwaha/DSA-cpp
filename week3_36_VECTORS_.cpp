#include <iostream>
#include <vector>
using namespace std;


// void fun(int array[] , int n){
//     cout<<"elements of array are";
//     for(int i = 0 ; i<n ; i++){
//         cout<<array[i]<<endl;
//     }
// }

// int main(){

// // --------------------------------------------------------------
// //STATIC array initialization
// // int arr[5]; //STATIC array initialization


// //DYNAMIC memory allocation-----
// // int n ;
// // cin>>n;
// // int *arr = new int[n]; //DYNAMIC memory allocation
// // --------------------------------------------------------------



// //static array
// // int array[5]={1,4,5,3,2};
// // fun(array,5);


// //Dynamic array
// int n;
// cin>>n;
// int *array = new int[n];//each element would be 0 or GRABAGE by default


// for(int i=0 ; i<n ; i++){
//     int data;
//     cin>>data;
//     array[i]=data;
// }// -> 0 index to 4 index


// //let me try to insert more items
// //5 -> 14 index;
// for(int i = 0;i<10;i++){
//     array[n+i]=80;
// }//we faild to insert more element in array so now we use VECTOR STL;
// fun(array,n);

//     return 0;
// }


// **********VECTORS**********
void print(vector<int>v){
    int size=v.size();
    for(int i = 0 ; i<size ; i++){
        cout<<v[i]<<endl;
    }
}



int main(){
    //in vector dont tell size of vector.
    //just keep insert element , it will manage the element on its own

//vector initialization
    vector<int>v; // just similar to array

//elemetn inserting
v.push_back(3);
v.push_back(6);
v.push_back(1);

print(v);

cout<<"popping up the digits"<<endl;;
v.pop_back();
v.pop_back();
print(v);




    return 0;
}