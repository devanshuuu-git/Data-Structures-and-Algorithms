#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
        int n=nums.size();
    //     unordered_map<int, int> hash;

    //     for(int i=0;i<n;i++){
    //         hash[nums[i]]++;
    //     }
    //     for(int i=0;i<n;i++){
    //         if(hash[nums[i]]==1){
    //             return nums[i];
    //         }
    //     }

    // return -1;
        int xor1=0;
        for(int i =0; i<n;i++){
        xor1 = xor1^nums[i];
        }
    return xor1;

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

        int ans = singleNumber(arr);
        cout<<ans;
    }