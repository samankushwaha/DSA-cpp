#include <iostream>
using namespace std;

int main(){

    // int a = 5;
    // int b = 10;

    // cout<<(a&b);



    // int a = 5;
    // int b = 10;

    // cout<<(a|b);


    // int num = 1;
    // cout<<~num <<endl;
    // cout<<(~num) <<endl;
    // cout<<~(num) <<endl;



// int a =5;
// int b = 10;
// cout<<(a^b)<<endl;

// int a =5;
// int b = -5;
// cout<<(a^b)<<endl;




// //left shift

// int a =7;
// int ans =(a<<2);
// cout<<ans <<endl;

//right shift
    
    // int n = -100;
    // int ans = (n>>1);
    // cout<<ans;


    // unsigned int n = -100;
    // // int ans = (n>>1);
    // cout<<(n >> 1); //big positive number



    // int n = 10;
    // cout<<(n << -1); // by left shifting a value with -ve number it will give warning and print garbage value


//POST/PRE INCREMENT -------- POST/PRE DECREMENT

// int a = 21;
// cout<< ++a <<endl; // a -> 22
// cout<< a++ <<endl; // prints a = 22 from above step then we used post increment so it will increment from 22 to 23
// cout<< a <<endl; // then it will print 23 coz of above step


// int a = 10;
// cout<< (++a)*10<<endl;// a = 1100

// cout<<(a++)*10<<endl;

// cout<<a;



int a = 10;
cout<<((a++) * (++a)) <<endl; // 120----\WHY
cout<<((++a) * (a++)) <<endl; // 132----/WHY




    return 0;
}