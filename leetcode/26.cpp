#include<bits/stdc++.h>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    int i=0;
    int j=1;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
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

    int ans = removeDuplicates(arr);

    cout << ans;

    

}