#include <iostream>
#include <string.h>
using namespace std;

//Finding Length


int findlength(char ch[] , int size){
    
    //WHILE loop
    int index = 0;
    while(ch[index]=='\0'){
        index++;
        }
    
    
    

    
    //FOR loop
    // int length=0;
    // for(int i=0 ; i<size ; i++){
    //     if(ch[i]=='\0'){
    //         //rukjao
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;


}


int main(){

int a;
char ch[100];
cout<<"input diyo jara: ";
// cin>>ch;
cin.getline(ch,100);//includes spaceses too

int len = findlength(ch , 100);
cout<<"length of string : "<<len<<endl;

cout<<"printing length using predefined function : "<<strlen(ch)<<endl ;

    return 0;
}