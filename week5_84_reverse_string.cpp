#include <iostream>
#include <string.h>
using namespace std;

void reverse(char ch[] , int len){
    int i = 0;
    int j = len-1;

    while(i<=i){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }

}


int findlength(char ch[] , int size){
    
    //WHILE loop
    int index = 0;
    while(ch[index]=='\0'){
        index++;
        }
    return index;
}




int main(){

char ch[20];
cin.getline(ch,20);

int len = findlength(ch , 20);

cout<<"Before: "<<ch<<endl;
reverse(ch , len);
cout<<"after: "<<ch<<endl;




//PREDEFINE FUNCTION
// char ch[10];
// cin>>ch;
// cout<<"reverse is"<<strrev(ch);






    return 0;
}