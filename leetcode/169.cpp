#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n=nums.size();

        
        // map<int,int> mpp;

        // for(int i=0; i<n; i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it: mpp){
        //     if(it.second>n/2){
        //         return it.first;
        //     }
        // }
        // return -1;


        //Moore's Voting Algorithm 
        // when problem states there is a majority element, if it doesnt we do one more iteration.
        // refer Moore's voting algorithm
        int cnt =0;
        int element;

        for(int i=0; i<n;i++){
            if(cnt==0){
                cnt=1;
                element = nums[i];
            }else if(nums[i]==element){
                cnt++;
            }else{
                cnt--;
            }
        }
        return element;
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
    int ans = majorityElement(nums);
    cout<<ans;
    
 

}