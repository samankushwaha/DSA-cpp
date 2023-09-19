#include <iostream>
using namespace std;

int main(){

//----IMPLICIT CONVERSION-----
// int num1 = 10;
// float num2 = 5.5;
// cout<<num1+num2;

//CHAR TO INT
// char ch = 'A';//it will not store A it will stores its ASCII value
// char a = ch + 1;
// cout<<a;


// // INT TO CHAR
// int z = 97;
// char ch = z; //here we stores the int value in char data type
// cout<<ch<<endl; //here it will not print 97 it will print 97's ASCII character


// ------EXPLICIT CONVERSION------


// CONVERTING FLOAT TO INT--

// int num1 = 12;
// float num2 = 2.5;
// cout<<num1+(int)num2;//here we typecasted float into int manually


// CONVERTING INT INTO CHAR
// int z = 56;
// cout<<(char)z; //here we type casted int into char so the int value changed into 56 into some ASCII

//DOUBLE INTO INT---
// double pi = 3.14159265;
// int intpi = (int)pi;
// cout<<intpi<<endl;


// FLOAT TO CHAR---
// float var = 64.35;
// cout<<(char)var; // 64.35 will typecast into char and change 64 not 64.35 into some ASCII character


// INTO TO FLOAT---
int a = 10;
int b = 3.0;

float c = a/((float)b);
// int c = a/((float)b); // it will not convert into float coz we are storing float data inside the int variable
cout<<c;

    return 0;
}