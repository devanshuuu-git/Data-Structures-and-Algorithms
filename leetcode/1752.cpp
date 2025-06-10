#include<bits/stdc++.h>
using namespace std;


bool check(vector<int>& nums) {
    int peak=0;
        int cnt=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>nums[(i+1)%n]){
                peak++;
            }
            if(nums[i]==nums[(i+1)%n]){
                cnt++;
            }
        }
        if(peak==1 || cnt==n){
            return true;
        }else{
            return false;
        }
}



int main(){
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    bool ans = check(arr);

    cout << ans;

    

}