#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();



        //optimal
        int cnt1=0;
        int cnt2=0;
        int ele1=INT_MIN;
        int ele2=INT_MIN;

        for(int i=0; i<n; i++){

            if(cnt1 == 0 && ele2 != nums[i]){
                ele1 = nums[i];
                cnt1++;
            }else if(cnt2==0 && ele1 != nums[i]){
                ele2 = nums[i];
                cnt2++;
            }else if(nums[i]==ele1){
                cnt1++;
            }else if(nums[i]==ele2){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int> result;
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
        if (nums[i] == ele1) cnt1++;
        if (nums[i] == ele2) cnt2++;
        }

        int mini = int(n / 3) + 1;
        if (cnt1 >= mini) result.push_back(ele1);
        if (cnt2 >= mini) result.push_back(ele2);

        return result;

        //brute
        // map<int,int> mpp;
        // vector<int> result;
        // int min = int(n/3)+1;

        // for(int i=0; i<n; i++){
        //     mpp[nums[i]]++;

        //     if( mpp[nums[i]]==min){
        //         result.push_back(nums[i]);
        //     }
        //     if (result.size() == 2) break;
        // }
        // return result;
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
    vector<int> ans = majorityElement(nums);
    
    for (int it : ans) {
        cout << it << " ";
    }
    
 

}