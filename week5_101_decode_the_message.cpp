// #include <iostream>
// #include <string.h>
// using namespace std;


//-------------------------------------------
//    leet code - 2325
//-------------------------------------------


// string decodeMessage(string key , string message)
// {
//     // create maping
//     char start = 'a';
//     char mapping[200] = {0};

//     // for each loop
//     for (auto ch : key)
//     { // here ch will itrate on every elment on key

//         if (ch != ' ' && mapping[ch] == 0)
//         {
//             mapping[ch] = start;
//             start++;
//         }
//     }

//     // use mapping
//     string ans;

//     for (auto ch : message)
//     {

//         if (ch == ' ')
//         {
//             ans.push_back(' ');
//         }
//         else
//         {
//             char decodedchar = mapping[ch];
//             ans.push_back(decodedchar);
//         }
//     }
//     return ans;
// }




// int main()
// {

// string key[100] = "the quick brown fox jumps over the lazy dog";

// string message[100]= "vkbs bs t suepuv";

// cout<<decodeMessage(key , message);


//     return 0;
// }