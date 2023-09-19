#include <iostream>
using namespace std;

//computer dont have bodmas
// se we use BRACKETS to PREVENT OPERATOR PRECENDENCE


int main(){

    int a = 2*3/5+6-2;
    cout<<a<<endl;

    int Z = (2*3)/(5+6)-2;
    cout<<Z<<endl; // to prevent operator precedence we use brackets



    return 0;
}