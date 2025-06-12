#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=0;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){   
            if(nums[i]==1){
                cnt++;
                maximum = max(maximum,cnt);
            }else{
                cnt=0;
            }
        }
        return maximum;
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int ans = findMaxConsecutiveOnes(arr);
    cout<<ans;
 

}