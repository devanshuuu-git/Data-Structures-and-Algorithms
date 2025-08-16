#include<bits/stdc++.h>
using namespace std;



int Merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    int cnt = 0;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            cnt += (mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
     for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    return cnt;
}

int MergeSort(vector<int> &arr, int low, int high){
    int cnt = 0;
    if(low>=high){
        return cnt;
    }
    int mid = (low + high)/2;

    cnt += MergeSort(arr, low, mid);
    cnt += MergeSort(arr, mid+1, high);
    cnt += Merge(arr, low, mid, high);
    
    return cnt;
}

int countInversin(vector<int>& nums, int n){

    // int n=nums.size();
    // int count=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]>nums[j]){
    //             count++;
    //         }
    //     }
    // }
    // return count;
    return MergeSort(nums,0,n-1);
    
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
    
    cout<<countInversin(nums, n);

    
    return 0;
}