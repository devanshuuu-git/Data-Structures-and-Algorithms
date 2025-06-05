#include<bits/stdc++.h>
using namespace std;


int FirstOccurrance(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    int first = -1;

    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == k){
            first = mid;
            high = mid-1;
        }
        else if (k > arr[mid]){
            low = mid + 1;
        } 
        else{
            high = mid - 1;
            }
    }
    return  first;

}
int LastOccurrance(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    int last = -1;

    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] == k){
            last = mid;
            low = mid+1;
        }
        else if (k > arr[mid]){
            low = mid + 1;
        } 
        else{
            high = mid - 1;
            }
    }
    return  last;

}



pair<int,int> FirstAndLast(int arr[], int n, int k){
    int first = FirstOccurrance(arr,n,k);
    if(first==-1){
        return {-1,-1};
    }
    return {first,LastOccurrance(arr,n,k)};

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

pair<int,int> ans = FirstAndLast(arr,n,k);
if(ans.first == -1){
    return 0;
}
cout << ans.first << " " << ans.second<<endl; 
cout<<ans.second-ans.first+1;
}