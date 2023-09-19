#include <iostream>
using namespace std;
int main(){


//SQUARE
    // //outer loop -> rows
    // for(int i = 0 ; i<4 ; i++){
    //     //inner loops -> coloumns
    //     for(int j = 0 ; j<4 ; j++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }


//RECTRANGLE
    // //Outer loop -> rows
    // for(int i = 0 ; i<3 ; i=i+1){
    //     //inner loop -> 5 stars
    //     for(int j = 0 ; j < 5 ; j++ ){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }


    // for(int i = 0 ; i<=2 ; i++){
    //     for(int j = 0 ; j<=2 ; j++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }


//HOLLOW RECTRANGLE-----------------------------
// for(int i = 0 ; i<5 ; i=i+1){
//     for(int j = 0; j<5 ; j=j+1){
//         if(i==0 || i==4){
//             cout<<"* ";
//         }
//         else{
//             if(j==0 || j==4){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//     }

//     cout<<endl;
// }

// for(int i = 0 ; i < 5 ; i++){
//     for(int j = 0 ; j < 5 ; j++){
//         if(i==0 || i==4 || j==0 || j==4){
//             cout<<" *";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// }



// //PYRAMID
// int n;
// cout<<"Enter n";
// cin >>n;
// for(int i = 0 ; i < n ; i++){
//     for(int j=0 ; j<i+1 ;j++){
//         cout<<" *";
//     }
//     cout<<endl;
// }


// for(int i =0 ; i <=8 ; i++){
//     for(int j = 0 ; j<i ; j++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


// //outer
// for(int i =0 ; i <=5 ; i++){
//inner
//     for(int j =0; j=8-i;j=j+1){
//         cout<<"* ";
//     }
//     cout<<endl;
// }



//FULL-PYRAMID

// int n;
// cout<<"N ?";
// cin>>n;


// for(int row=0;row<n ; row++){
//     //spaces
//     for(int col=0 ; col<n-row-1 ; col++){
//         cout<<" ";
//     }

//     //stars
//     for(int col=0 ; col<row+1;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


// //inverted full pyramid

// int n;
// cout<<"N ?";
// cin>>n;
// for(int row=0 ; row <n ; row++){
//     for(int col=0 ; col<row ; col++){
//         cout<<" ";
//     }

//     //stars
//     for(int col=0 ; col<n-row ; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }



//DIAMOND 
// int num;
// cout<<"Nnum ?";
// cin>>num;

// int n=num/2;
// for(int row=0;row<n ; row++){
//     //spaces
//     for(int col=0 ; col<n-row-1 ; col++){
//         cout<<" ";
//     }

//     //stars
//     for(int col=0 ; col<row+1;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// for(int row=0 ; row <n ; row++){
//     for(int col=0 ; col<row ; col++){
//         cout<<" ";
//     }

//     //stars
//     for(int col=0 ; col<n-row ; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//-----------------------------------------------------

// //HOLLOW INVERTED HALF PYRAMID
// int n ;
// cout<<"n =";
// cin>>n;
// for(int row =0 ; row<n ; row++){
//     for(int col=0; col<n-row ; col++){
//         if(row==0 || row==n-1){
//             cout<<"*";
//         }
//         else{
//             if(col==0 || col == n-row-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<" *";
//     }
//     cout<<endl;
// }

//-----------------------------------------------------



//HOLLOW pyramid
// int n;
// cout<<"N ?";
// cin>>n;

// for(int row=0;row<n ; row++){
//     //spaces
//     for(int col=0 ; col<n-row-1 ; col++){
//         cout<<" ";
//     }

//     //stars
//     for(int col=0 ; col<row+1;col++){
//         if(col==0 || col==row +1-1){
//         cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// }


//HOLLOW inverted pyramid------------BACHA HAI AVI YE
// int n;
// cout<<"N ?";
// cin>>n;
// for(int row=0 ; row <n ; row++){
//     for(int col=0 ; col<row ; col++){
//         cout<<" ";
//     }

//     //stars
//     for(int col=0 ; col<n-row ; col++){
        
//         cout<<"* ";
//     }
//     cout<<endl;
// }


//----------------------------NOT COMPLETED

// int n;
// cout<< "n ?";
// cin>>n;

// for(int row=0 ; row <n; row++){
//     for(int col=0 ; col<n-row ; col++ ){
//         cout<<" *";
//     }

//     for(int col=0 ; col<2*row+1 ; col++){
//         cout<<"  ";
//     }

//     for(int col=0 ; col<n-row ; col++){
//         cout<<" *";
//     }
//     cout<<endl;
// }

// for(int row=0 ; row <n; row++){
//     for(int col=0 ; col<n+row ; col++ ){
//         cout<<" *";
//     }

//     for(int col=0 ; col<2*row+1 ; col++){
//         cout<<"  ";
//     }

//     for(int col=0 ; col<n+row ; col++){
//         cout<<" *";
//     }
//     cout<<endl;
// }


//-------------------------------------------------------------

//FANCY 1
// int n ;
// cout<<"n =";
// cin>>n;

// for(int row=0 ; row<n ; row++){
//     for(int col=0 ; col<2*row+2 ; col++){
//         if(col%2==1){
//             cout<<"*";
//         }
//         else{
//             cout<<row+1;
//         }
//     }
//     cout<<endl;
// }


// int n ;
// cout<<"n =";
// cin>>n;
// for(int row=0 ; row<n ; row++){
//     int totalcol =row+1;
//     for(int col=0 ; col<totalcol ; col++){

//         if(col == totalcol -1){
//             cout<<row+1;
//         }
//         else{
//             cout<<row+1<<"*";
//         }
//     }
//     cout<<endl;
// }

//-----------------------------------------------------------

// 1
// 12
// 123
// 1234


// int n ;
// cout<<"n=";
// cin>>n;

// for(int row=0 ; row<n ; row++){
//     for(int col=0 ; col<row+1 ; col++){
//         cout<<col+1;
//     }
//     cout<<endl;
// }

//---------------------------------------------------------------

int n ;
cout<<"n=";
cin>>n;

for(int row=0 ; row<n ; row++){
    for(int col=0 ; col<row+1 ; col++){
        char ch=0 ; col<row+1+'A' -1;
        cout<<ch;
    }
    cout<<endl;
}







    return 0;
}