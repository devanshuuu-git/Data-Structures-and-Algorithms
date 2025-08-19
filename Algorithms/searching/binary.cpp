#include<bits/stdc++.h>
using namespace std;
// recusive approach
int BinarySearch(int arr[], int low, int high, int k){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid] == k){
        return mid;
    }
    else if(k>arr[mid]){
        return BinarySearch(arr, mid+1, high, k);
    }
    else{
        return BinarySearch(arr, low, mid-1, k);
    }
}   

int search(int arr[], int n, int k){
    return BinarySearch(arr, 0, n-1, k);
}



// iterative approach
int binarySearch(int arr[], int n, int k){
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == k) return mid;
        else if (k > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return  -1;

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


int ans = search(arr,n,k);
cout<<ans;

}