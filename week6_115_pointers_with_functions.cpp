// #include <iostream>
// using namespace std;


// void solve(int *arr , int size){
//     cout<<"Size of arrary inside function is : "<<sizeof(arr)<<endl;//as we studied before whatever the data type is it will return 4 to all

// }


// int main(){

// int arr[]={10,20,30,40,50};// == size is 20 , 4 each element
// cout<<"size of element: "<<sizeof(arr)<<endl;


// solve(arr,5);

//     return 0;
// }


//----------------------------------------------------------------------

#include <iostream>
using namespace std;


void solve(int *arr , int size){
    cout<<"inside solve fun --> arr"<<arr<<endl;
    cout<<"inside solve fun --> &arr"<<&arr<<endl; // only its answer will change coz the arr in function is passed as a POINTER not as a array


}


int main(){

int arr[]={10,20,30,40,50};
solve(arr,5);

cout<<"inside main --> arr"<<arr<<endl;
cout<<"inside main --> &arr"<<&arr<<endl;

    return 0;
}
