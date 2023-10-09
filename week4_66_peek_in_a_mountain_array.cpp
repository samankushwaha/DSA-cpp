#include<iostream>
#include<vector>
using namespace std;



// 1   2   5   4   3
// |_____||_________|
//     A       B -----lines




int peekinamountain(int arr[] , int n){
    // int n = v.size();
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;


    while(s<e){
        if(arr[mid] < arr[mid+1]){//we are in liner A
            s=mid+1;//right jao
        }

        else{
            //ya toh B pe hu ya toh PEEK pr
            e = mid; //-1 isiliye nahi kiya kyuki agar karte toh peak lost hojati or naye arrya mai sirf 1 and 2 hote
        }

        mid=s+(e-s)/2;
    }
    return mid;


}


int main(){

int arr[] = {1,2,5,4,3};
int n = 5;



// peekinamountain(arr , n); 
int ans = peekinamountain(arr , n);
cout<<"answer is : "<<ans;







// vector<int>v;
// int ans=peekinamountain(vector<int>v);
// v.push_back(1);
// v.push_back(2);
// v.push_back(5);
// v.push_back(4);
// v.push_back(3);


    return 0;
}