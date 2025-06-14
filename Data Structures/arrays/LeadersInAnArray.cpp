#include<bits/stdc++.h>
using namespace std;


vector<int> leaderArray(vector<int>& nums){
    int n =nums.size();
    vector<int> ans;


    // for(int i=0;i<n;i++){
    //     int flag = true;
    //     for(int j=i+1;j<n;j++){
    //         if(nums[j]>nums[i]){
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if(flag==true){
    //         ans.push_back(nums[i]);
    //     }
    // }
    // return ans;
    int maax = nums[n-1];
    ans.push_back(nums[n-1]);
    for(int i=n-2;i>=0;i--){
        if(nums[i]>maax){
            ans.push_back(nums[i]);
        }
        maax = max(maax, nums[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;

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

    vector<int> ans = leaderArray(nums);

    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
}