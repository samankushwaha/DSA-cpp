
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int>&nums, int s , int e){
    //base case
    if(s>e){
        return 0;
    }

    int option1=nums[s] + solve(nums, s+2 , e);
    int option2=0+solve(nums,s+1,e);
    int ans = max(option1 , option2);
    return ans;
}


int rob(vector<int>nums){
    
    int n = nums.size();
    int s =0;
    int e = n-1;
    int ans = solve(nums,s,e);
    return ans;
}


int main(){

vector<int>nums={1,2,3,1};

int ans = rob(nums);
cout<<ans;

    return 0;
}