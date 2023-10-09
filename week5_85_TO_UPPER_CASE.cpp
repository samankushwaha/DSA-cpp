#include <iostream>
#include <string.h>

using namespace std;


void touppercase(char ch[] , int n){
    
    int index =0;
    while(ch[index] != '\0'){
        char currentchar = ch[index];
        //check if it is in lower charracter
        if(ch[index]>='a' && ch[index] <= 'z'){
            ch[index] = currentchar - 'a' + 'A';
        }
        index++;
    }
}


int main(){

char ch[100] ;
cin.getline(ch , 100);

cout<<endl<<"before: "<<ch<<endl;
touppercase(ch , 100);
cout<<endl<<"after: "<<ch<<endl;

}