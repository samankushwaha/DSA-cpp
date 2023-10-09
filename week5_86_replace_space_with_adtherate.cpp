#include<iostream>
#include<string.h>
using namespace std;


//Replacing spaces ' ' with @


void withadtherate(char ch[] , int n){

    int index = 0;
    while(ch[index] != '\0'){
        char currindex = ch[index];
        if(currindex == ' '){
            ch[index] = '@';
        }
        index++;
    }
}

int main(){

char ch[100];
cin.getline(ch,100);

withadtherate(ch , 100);

cout<<ch;

    return 0;
}