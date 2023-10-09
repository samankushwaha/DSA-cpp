#include  <iostream>
#include  <string.h>
using namespace std;


int main(){

// creation
string name;

//-------------------------------------------------------------------------

// input
// cin>>name;
//input with tabs and spaces
getline(cin , name);

//-------------------------------------------------------------------------

// Print
cout<<"Printnig the name: "<<name<<endl;

//-------------------------------------------------------------------------

//Indexing
cout<<"Printing through indexing:   "<<name[1]<<endl;


int index=0;
while(name[index] != '\0'){
    cout<<"index: "<<index<<"and value: "<<name[index]<<endl;
    index++;
}

//-------------------------------------------------------------------------

//Prienting NULL character
int value = int(name[5]);
cout<<"ASCII value of null character is: "<<value<<endl;


    return 0;
}
