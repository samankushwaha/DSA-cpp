#include <iostream>
#include <vector>
using namespace std;


int selectionsort(vector<int>&v){
    int n  = v.size();

    // i=0 , k liye chor do , ignore it
    for(int i=1 ; i<n ; i++){
        int key = v[i];
        int j=i-1; //here i = 4 and j=i-1 means j = 5
        

        //move element of v[0..j-1] that are greater than key
        //to one position ahead of theer current position
        while(j >=0 && v[j] > key){
            v[j+1] = v[j]; // yaha v[j] 5 hai jisko apan already sorted manrahe hai toh ayaha apan v[j+1] mai v[j] dal rahe hai joki 5 hai
            j--; //out of bound chala gaya j pr abb---
        }
        //insertion
        v[j+1]=key; //wapas bound me leaye means jo j out of bound chala gaya tha usmai apan key daldenge joki hai 4(as per the 1st itration)
        // toh yaha pe swapping hogaya v[j+1]=v[j] and v[j+1]=key
    }

}


int print(vector<int>v){
    int n = v.size();
    int i=0;
    while(i < n){
        cout<<v[i];
        i++;
    }
}


int main(){
vector<int>v={5,4,3,2,1};

selectionsort(v);
print(v);



    return 0;
}
