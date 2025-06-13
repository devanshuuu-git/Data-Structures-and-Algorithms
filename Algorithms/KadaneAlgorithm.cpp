#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n =nums.size();
       
        int sum =0;
        int maximum = nums[0];
        for(int i=0;i<n;i++){
            sum += nums[i];
            maximum = max(maximum, sum);
            if(sum<0){
                sum=0;
            }
        }
        return maximum;
    
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