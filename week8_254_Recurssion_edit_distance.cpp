#include <iostream>
#include <vector>
using namespace std;


int solve (string a , string b , int i , int j){
    //base case
    if(i>=a.length()){
        //word1 wali string end hogayi hai
        //yahi word 1 ki length may be greater than word2 hai
        return b .length() -j;
    }
    if(i>=b.length()){
        //word1 wali string end hogayi hai
        //yahi word 1 ki length may be greater than word2 hai
        return a .length() -i;
    }
    int ans =0;

    if(a[i]==b[j]){
        //match
        ans=0+solve(a,b,i+1,j+1);
    }
    else{
        //not match
        //operation perform karo
        //insert
        int  opetion = 1+solve(a,b,i,j+1);

    }


}


int mindistance(string word1 , string word2){
    int i =0;
    int j =0;
    int ans = solve(word1,word2 ,i,j);
    return ans;
}



int main(){



int mindistance(word1 , word2);


    return 0;
}