#include<bits/stdc++.h>
using namespace std;


int SearchInRotated(vector<int> &arr, int n, int k){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low +((high-low)/2);

        if(arr[mid] == k){
            return mid;
        }
        else if(arr[low] <= arr[mid]){
            if(arr[low] <= k && k <= arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid] <= k && k <=arr[high]){
                low = mid+1;
            }else{
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
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cin>>k;

    int ans = SearchInRotated(arr,n,k);
    cout<<ans;

}