#include<bits/stdc++.h>
using namespace std;

int rotationCount(vector<int> &arr,int n){
    int low=0;
    int high=n-1;
    int ans=INT_MAX;
    int index = -1;
    while(low<=high){
        
        int mid = low +((high-low)/2);

        if(arr[low] <= arr[high]){
            if(arr[low]<ans){
                index = low;
                ans = arr[low];
                break;
            }
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                index = low;
                ans = arr[low];
            }
            low = mid+1;
        }
        else{
            if(arr[mid]<ans){
                index = mid;
                ans = arr[mid];
            }
            high = mid-1;
        }
    }
    return index;
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
   

   cout<<rotationCount(arr,n);
    
}