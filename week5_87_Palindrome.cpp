#include <iostream>
#include <string.h>

using namespace std;


bool palindrome(char ch[] , int n){
    int i = 0;
    int j = n-1;

    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else{
            //characters are not matching;
            return false;
        }
    }

    //agar yaha pohoch gaye ho mtlb sare characters match hogaye hai
    //so, retrurn TRUE and it ais a palindrome
return true;
}



int main(){

char ch[100];
// cin>>ch;
cin.getline(ch , 100);
int len = strlen(ch);

bool ispalindrome = palindrome(ch , len);

if(ispalindrome){
    cout<<"palindrome";
}
else{
    cout<<"not a plaindrome";
}

    return 0;
}