#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int>& nums) {
    int n = nums.size();
    int low = 1;
    int high = n-2;

    if(n==1){
        return 0;
    }
    else if(nums[0]>nums[1]){
        return 0;
    }
    else if(nums[n-1]>nums[n-2]){
        return n-1;
    }

    while(low<=high){
        int mid = (low+high)/2;

        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            return mid;
        }
        else if(nums[mid]>nums[mid-1]){
            low = mid+1;
        }
        else if(nums[mid]<nums[mid-1]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

int findPeakElement(vector<int>& nums) {
        
    int n= nums.size();
    for(int i = 0; i < n; i++){
        if((i==0 || nums[i-1]<nums[i]) &&  (i==(n-1) || nums[i]>nums[i+1])){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Array Size:"<<endl;
    cin>>n;

    cout<<"Input Array:"<<endl;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<peakElement(arr);
    
    
}