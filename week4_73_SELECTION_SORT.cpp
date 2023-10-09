#include <iostream>
#include <vector>
using namespace std;


int selectionsort(vector<int>&v){

    int n  = v.size();
    for(int i = 0 ; i<n-1 ; i++){
        int minindex = i;//i th is the smallest element for now (we assumed it)

        //apna element compare hoga
        // toh apna element index 0 se nahi 1 se hoga compare kyuki wo khud se thodina compare hoga
        for(int j=i+1 ; j<n ; j++){
            if(v[j] < v[minindex]){
                minindex = j; //updating the minindex
            }
        }
        //step 2 swapp ith and minindex
        swap(v[i] , v[minindex]);
    }

}



int print(vector<int>&v){
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
}




int main(){

vector<int>v = {44,33,55,22,11};

selectionsort(v);
print(v);





 

    return 0;
}