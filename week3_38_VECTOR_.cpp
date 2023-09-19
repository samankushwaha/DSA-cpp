#include <iostream>
#include <vector>
using namespace std;

void print(vector<char>v){
    cout<<"printing vector";
    int size=v.size();
    for(int i = 0 ; i<size ; i++){
        cout<<v[i]<<endl;
    }
}


int main(){
    //intializing vector
    // vector<int>v;
    vector<char>v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    v.push_back('d');

    print(v);
    cout<<"front element :"<<v[0];
    cout<<"End element :"<<v[v.size() -1];


        return 0;
}