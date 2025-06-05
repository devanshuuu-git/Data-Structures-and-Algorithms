#include<bits/stdc++.h>
using namespace std;


int SearchInRotated(int arr[], int n, int k){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[low]<=arr[mid]){    // checks the left half is sorted or not, if it is not then else is exected where right half is taken
            if(arr[low]<=k && k<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;   
}


int main(){
    int n;
    int k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;

    int ans = SearchInRotated(arr,n,k);
    cout<<ans;

}