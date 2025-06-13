#include<bits/stdc++.h>
using namespace std;

int subArray(vector<int>& nums, int k){
        int n =nums.size();

        // optimal when negatice, zeros, positive all present, better in terms of positive and zeroes
        // map<int,int> preSumMap;
        // int sum=0;
        // int maxLen=0;
        // for(int i=0;i<n;i++){
        //     sum = sum + nums[i];
        //     if(sum==k){
        //         maxLen = max(maxLen,i+1);
        //     }
        //     int rem = sum - k;
        //     if(preSumMap.find(rem)!=preSumMap.end()){
        //         int len = i - preSumMap[rem];
        //         maxLen = max(maxLen,len);
        //     }
        //     if(preSumMap.find(sum)==preSumMap.end()){
        //         preSumMap[sum]=i;
        //     }
        // }
        // return maxLen;


        int left =0;
        int right =0;
        int maxLen =0;
        int sum =0;
        while(right<n){
            while(left<=right && sum>k){
                sum-=nums[left];
                left++;
            }
            if(sum==k){
                maxLen = max(maxLen, right-left+1);
            }
            right++;
            sum += nums[right];
        }
        
        return maxLen;
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
    int k;
    cin>>k;

    int ans = subArray(nums,k);
    cout<<ans;


}