#include <iostream>
#include <string.h>
using namespace std;

//here we ued the empty string
//then we continuesly stores single character in the empty string 
//but if the current character is equal to the rightmost charcter of that empty string
//then we pop both
// Or else push the current element

    string removeDuplicates(string s) {
        string ans = "";
        int index =0;

        while(index < s.length()){
            //same
            // ..answer ka right most charracter and string s ka current character
            if(ans.length() > 0 && ans[ans.length()-1] == s[index]){
                //pop from answer
                ans.pop_back();
            }
            else{
                //push
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }


int main(){


char s[100] = "azxxzy";

cout<<removeDuplicates(s);


    return 0;
}


// #include <iostream>
// #include <string.h>
// using namespace std;


// string duplicate(string str){
//     string ans = "";//making a empty string
//     int index =0;

//     while(index < str.length()){
//         //check if equal or not
//         if(str[index] > 0  &&  ans[ans.length() -1] == str[index]){
//            ^    
//            |       DOUBT HAI YAHA PE EMPTY STRING HONA CHGAHIYE THA
//--------------------------------------------

//             ans.pop_back();
//         }
//         else{
//             ans.push_back(str[index]);
//         }
//         index++;
//     }
//     return ans;
// }


// int main(){

// char str[100]="azxxzy";

// cout<< duplicate(str);




//     return 0;
// }
