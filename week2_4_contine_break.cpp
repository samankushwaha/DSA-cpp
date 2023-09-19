#include <iostream>
using namespace std;

int main(){


// //BREAK
//     for(int i = 0 ; i <= 5 ; i++){
//         cout<<i<<endl;
//         if(i==2)
//         break; // when i become 2 it will print loop till2 then loop will get break 
//     }


// //CONTINUE
//     for(int i = 0 ; i <= 5 ; i++){
//         if(i==2)
//         continue;
//         cout<<i<<endl; // 2 will get skipped coz of continue keyword
//     }


for(int i = 0 ; i<=5 ; i++){
    cout<<"Hello"<<endl;
    continue; //COZ of this SAMAN will never get print the loop will print Hello then SAMAN get skipped
    cout<<"SAMAN"<<endl;

}


    return 0;
}