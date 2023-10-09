



//SEE ON LEETCODE 647 U HAVE SOLVED IT UNDERSTAND IT VERY VERY IMPORTANT


// #include <iostream>
// #include <string.h>
// using namespace std;

//     int expand(string s,int i ,int j){
//         int count = 0;
//         while(i>=0 && j < s.length() && s[i] == s[j]){
//             count++;
//             i--;
//             j++;
//         }
//         return count;

//     }

//     int countSubstrings(string s) {
//         int totalcount = 0;  

//         for(int center = 0 ; center < s.length() ; center++){
//             //ODD
//             int oddkaans = expand(s, center , center);

//             //EVEN
//             int evenkaans = expand(s , center , center+1);
//             totalcount = totalcount + oddkaans + evenkaans;

//         }
//         return totalcount;
        
//     }

// int main(){


// string s[100] = "abc";

// cout<<countSubstrings(s);


//     return 0;
// }

