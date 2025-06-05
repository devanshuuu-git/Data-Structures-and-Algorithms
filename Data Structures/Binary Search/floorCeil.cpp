#include<bits/stdc++.h>
using namespace std;

// floor     largest no. in array <=n
// Ciel      smallest no. in arrat >=n
int Ciel(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] >= k){
            ans = arr[mid];
            high = mid-1;
        } 
        else{
            low = mid +1;
        }
    }
    return  ans;
}
int floor(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] <= k){
            ans = arr[mid];
            low = mid +1;
            
        } 
        else{
            high = mid-1;
        }
    }
    return  ans;
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

int ans = Ciel(arr,n,k);
int ans1 = floor(arr,n,k);
cout<<ans<<" "<<ans1;


}