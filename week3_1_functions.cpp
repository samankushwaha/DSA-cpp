// #include <iostream>
// using namespace std;



// //function declaration
// void printname( );


// int main(){

// printname(); //function call



//     return 0;
// }

// //declaration + defination 
// void printname( )
// {
//     for(int i=0 ; i<10 ; i++){
//         cout<<"sundar likes sundari"<<endl;
//         }
//     }



//ADDING 3 NUMS WITHOUT RETURNS
// #include <iostream>
// using namespace std;

// void teen(int a , int b , int c){
//     int sum = a+b+c;
//     cout<<"sum is"<<sum;
// }

// int main(){

//     teen(1,2,3);

// return 0;
// }



//ADDING # NUMS
// #include <iostream>
// using namespace std;

// int printsum(int a , int b , int c){
//     int ans = a+b+c;
//     return ans;
// }

// int main(){

//     cout<<"sum is "<< printsum(4,2,5);


//     return 0;
// }





//USING RETURN INSIDE VOID but make sure return statement should be written in the end
// # include <iostream>
// using namespace std;

// void mess(){
//     cout<<"msg1"<<endl;
//     return;
//     cout<<"msg2"<<endl;
// }

// int main(){

//     mess();

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int max(int a , int b , int c){
//     if(a>=b && a>=c){
//         cout<<a<<" biggest";
//     }
//     else if(b>=c && b>=c){
//         cout<<b<<" biggest";
//     }
//     else{
//         cout<<c<<"biggest";
//     }
// }

// int main(){

// max(1,2,3);

// return 0;
// }


// //finding MAX using MAX funcition
// #include <iostream>
// using namespace std;

// int maximun(int num1 , int num2 , int num3){
//     int ans = max(num1 , num2);
//     int finalans = max(ans,num3);
//     // cout<<"final ans using max function is"<<finalans;
//     return finalans;
// }

// int main() {

// cout<<maximun(12,21,66);

//     return 0;
// }




//COUNTING 1 TO 10
// #include <iostream>
// using namespace std;

// void printcounting(int n){
//     for(int i=1 ; i<=n ; i++){
//         cout<<i<<endl;
//     }
// }

// int main() {

// printcounting(10);


// return 0;
// }


//EVEN OR ODD ?
// #include <iostream>
// using namespace std;

// void evenodd(int num){
//     if(num%2==0){
//         cout<<"EVEN"<<num;
//     }
//     else{
//         cout<<"ODD"<<num;
//     }
// }

// int main(){

//     evenodd(12);

//     return 0;
// }


//---------------------------------------------------
// // //ADDING UPTO N
// // #include <iostream>
// // using namespace std;

// // void upton(int n){
// //     int sum;
// //     for(int i=0 ; i<=n ; i++){
// //         sum+=i;
// //     }
// //     cout<<sum;
// // }

// // int main(){

// // upton(10);

// //     return 0;
// // }


// //ADDING UPTO N
// #include <iostream>
// using namespace std;

// void upton(int n){
//     int sum;
//     for(int i=0 ; i<=n ; i=i+2){
//         sum+=i;
//     }
//     cout<<sum;
// }

// int main(){

// upton(10);

//     return 0;
// }
//-----------------------------------------------------


// //PRIME OR NOT-----------------PENDINGGGGG
// #include <iostream>
// using namespace std;

// checkprime(bool num){
//     for(int i = 2 ; i<num ; i++){
//         if(num%i==0){
//             //remained = -> pefectly divisible
//             //not a prime number
//             return false;
//         }
//     }

//     //now it is sure 
//     //num is a prime number

//     return true;
// }

// int main(){

// bool prime = checkprime(6);

// if(prime){
//     cout<<"PRIME HAI"<<endl;
// }
// else {
//     cout<<"its not a prime"<<endl;
// }


//     return 0;
// }