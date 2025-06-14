#include<bits/stdc++.h>
using namespace std;

int stock(vector<int>& nums) {
    int n =nums.size();
       
    int mini = nums[0];
    int maxProfit = 0;
    
    for(int i=0;i<n;i++){
        int profit = nums[i]-mini;
        maxProfit = max(maxProfit,profit);
        mini = min(mini,nums[i]);
    }
    return maxProfit;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int ans = stock(nums);
    cout<<ans;
    
 

}