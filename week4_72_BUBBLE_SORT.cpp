#include <iostream>
#include <vector>
using namespace std;



int bubblesort(vector<int>&v){
    int n = v.size();

    //humara outer loop chalega n-1 tk pr n-1 ko include nahi karenge
    for(int i =0 ; i<n-1 ; i++){
        
        //j getting bigger in every itteration
        // n-i-1 mtlb (size - itration - 1)
        for(int j = 0 ; j<n-i-1 ; j++){
            if(v[j] > v[j+1]){
                swap(v[j] , v[j+1]);
            }
        }
    }
}


int print(vector<int>&v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}






int main(){

vector<int>v = {5,4,3,2,1};
bubblesort(v);
print(v);

    return 0;
}