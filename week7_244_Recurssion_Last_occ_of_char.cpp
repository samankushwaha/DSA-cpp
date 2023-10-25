#include<iostream>
using namespace std;


void lastoccLTR(string&s , char x , int i , int&ans){
    //basecase
    if(i >= s.size()){
        return;
    }

    //processing
    if(s[i]==x){
        ans=i;
    }
    lastoccLTR(s , x , i+1 , ans);
}


int main(){

string s = "abcddedg";

char x = 'd';//--> what you have to search


int ans = -1;

lastoccLTR(s , x , 0 , ans);
cout<<ans<<endl;

    return 0;
} 