#include<iostream>
using namespace std;

void findsubsequence(string str , string output , int index){
//base case
if(index >= str.length()){
    //jab harama index str ki length se bada hojaye matlb output string
    // mai ans build hochuka hai
    cout<<"->"<<output<<endl;
    return;
    }

    char ch = str[index];

    //include
    output.push_back(ch);
    findsubsequence( str , output , index+1);
    
    //exclude
    output.pop_back();
    findsubsequence( str , output , index+1);



}

int main(){

string str = "abc";
string output = "";
int index = 0;

findsubsequence(str , output , index);


    return 0;
}

