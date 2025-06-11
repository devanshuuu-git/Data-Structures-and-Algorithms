#include<bits/stdc++.h>
using namespace std;

// brute force
int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // for(int i=1; i<=n;i++){
        //     int flag=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[j]==i){
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if (flag == 0) return i;
        // }
        // return -1;


        // vector<int> hash(n+1);
        // for(int i=0; i<n;i++){
        //     hash[nums[i]]=1;
        // }
        // for(int i=0; i<=n;i++){
        //     if(hash[i]==0){
        //         return i;
        //     }
        // }
        // return -1;


        // int sum = (n*(n+1))/2;
        // int sum1=0;
        // for(int i=0;i<n;i++){
        //     sum1 = sum1 + nums[i];
        // }
        // if(sum != sum1){
        //     return sum-sum1;
        // }
        // return 0;

        int xor1 =0;
        for(int i=0; i<=n;i++){
            xor1 = xor1^i;
        }
        int xor2=0;
        for(int i=0; i<n;i++){
            xor2=xor2^nums[i];
        }
        return xor1^xor2;
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
    
    int ans = missingNumber(arr);
    cout<<ans;
    
}