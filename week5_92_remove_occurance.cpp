#include <iostream>
#include <string.h>

using namespace std;

    string removeOccurrences(string s, string part) {
        
        while(s.find(part) != string::npos){
            //it means substring exists in main string
            s.erase(s.find(part) , part.length());
        }
        return s;
    }


int main(){

string s[100]="daabaabcbc";
string part[50]="abc";

cout<< removeOccurrences(s , part);

    return 0;
}

ERRRRRRRRRRRORRRRRRRRRR
