#include<iostream>
#include<string.h>
using namespace std;


int main(){


string var;

//empty string;
string temp = "";
cout<<temp;

//input with tabs and spaces
getline(cin , var);

//length
cout<<"Length of string: "<<var.length()<<endl;

//is empty or not
cout<<"String is empty or not: "<<var.empty()<<endl;

//Whats on the particular position
cout<<"at index"<<var.at(0)<<endl;

//First character of the stirng
cout<<"front character of string is: "<<var.front()<<endl;

//last character of the stirng
cout<<"back character of string is: "<<var.back()<<endl;


cout<<"---------------------------------------------------------------------"<<endl;

//CONCATINATING strings together using APPEND
string str1 = "hello this is string no. 1 ";
string str2 = "This is string no. 2";

str1.append(str1);//this is CONCATINATE THE STRINGS TOGETHER

cout<<str1<<endl;


cout<<"---------------------------------------------------------------------"<<endl;


//Deleting some values certain index till.....
string name="this is a bike";
name.erase(4,3); // this will erase 3 elements from index 4;
cout<<name<<endl;


cout<<"---------------------------------------------------------------------"<<endl;

//Inserting some element
string naya = "hehe this is from BCA";
string middle = "saman ";

naya.insert(13 , middle );
cout<<naya<<endl;


cout<<"---------------------------------------------------------------------"<<endl;

// //PUSH back and POP back
// string nam = "sam";
// cout<<nam<<endl;

// nam.push_back('an'); // this will push this string at the end
// cout<<nam<<endl;

// nam.pop_back();//this will pop the element from the back
// cout<<nam<<endl;



cout<<"---------------------------------------------------------------------"<<endl;


//Finding some element from another string
string st1 = "yaar tera supar star desi kala kar";
string st2 = "desi";
if(st1.find(st2)==string::npos){
    cout<<"not found"<<endl;
}
else{
    cout<<"found"<<endl;
}



cout<<"---------------------------------------------------------------------"<<endl;

//Comparing two string iwth eachother using compare 

string nam1 = "saman";
string nam2 = "saman";

if(nam1.compare(nam2) == 0){
    cout<<"Matching"<<endl;
}
else{
    cout<<"Not matching"<<endl;
}




cout<<"---------------------------------------------------------------------"<<endl;


//taking out SUB part from any string
string car = "this is a car, big daddy of all car";
cout<<car.substr(19 ,5)<<endl; // this will take out 5 length element from 19th index



    return 0;
} 