#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int pos = 0;
        int neg = 1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                ans[neg] = nums[i];
                neg += 2;
            }else{
                ans[pos] = nums[i];
                pos += 2;
            }
        }
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
    vector<int> ans = rearrangeArray(nums);
    
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i]<<" ";
    }
}