#include <iostream>
using namespace std;

int main(){



// char ch[100];
// cin>>ch;
// cout<<"Printg the value of ch: "<<ch<<endl;


//-----------------------------------------------------------------------------------------------------------
//So here we trying to print ASCII of null character which is after "saman" from typecasting
//So basically we are printing the ascii value of \0 null character 

// cout<<"null charateres"<<endl;
// char temp = ch[5];
// int value = (int)temp;
// cout<<"Printing integer value: "<<value<<endl;
// //So our characters will print until it finds NULL character

//--------------------------------------------------------------------------------------------------------------

// //DELIMETER
// char arrr[100];
// cout<<"give input"<<endl;
// cin>>arrr;  //So if you enter "saman kushwha" , so it will get terminate after a (space or tab button)
// cout<<"output of arrr: "<<arrr<<endl;

//-------------------|||-----------------------
//            a way to counter this

cout<<"getline function"<<endl;
//getline function use to print characters with spaces and tab between them but not enter

char cha[100];
cout<<"give input with spacessssss: ";
cin.getline(cha , 99);
cout<<cha<<endl;




    return 0;
}