#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v){
    cout<<"printing vector";
    int size=v.size();
    for(int i = 0 ; i<size ; i++){
        cout<<v[i]<<endl;
    }
}


int main(){
    //intializing vector
    vector<int>v;

    //Declaring Vectors
    vector<int>arr;//default with no data , 0 size
    vector<int>arr2(5, -2);//init with n size with specif data
    // arr.push_back(60);
    print (arr2);

    vector<int>arr3={1,4,3,6,8};
    arr3.pop_back();
    print(arr3);

    //How to Copy vector
    vector<int>arr4={4,1,3,6,2,9};
    vector<int>arr5(arr4); // here arr5 will initialize with arr4 values 
    print(arr5);


//Taking input in vector
cout<<"Taking input here: "<<endl;
int n;
cin>>n;
for(int i=0 ; i<n; i++){
    cout<<"taking input:  ";
    int d;
    cin>>d;
    v.push_back(d);
}
print(v);

//i want to clear the vector
v.clear();

print(v);



    return 0;
}