#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n=nums.size();


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
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element){
                cnt1++;
            }
            if(cnt1>n/2){
                return element;
            }
        }
        return -1;
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