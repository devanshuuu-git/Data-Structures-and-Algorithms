#include<bits/stdc++.h>
using namespace std;


// here we are suppose to find the first and the last occurance of the element
// first occurance of the element is found by the lower bound method, where we handle two edge cases 
// in which lb == n (default answer in lb) need to be handled
// second where arr[lb] != target this also needed to be handled
// and in last occurrance we take upperbound of the target and then substract it by 1

int FirstOccurrance(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] >= k){
            ans = mid;
            high = mid-1;
        } 
        else{
            low = mid +1;
        }
    }
    return  ans;

}

int LastOccurance(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid] > k){
            ans = mid;
            high = mid-1;
        } 
        else{
            low = mid +1;
        }
    }
    return  ans;
}

pair<int,int> FirstAndLast(int arr[], int n, int k){
    int lb = FirstOccurrance(arr,n,k);
    if(lb==n || arr[lb] != k){
        return {-1,-1};
    }
    return {lb,LastOccurance(arr,n,k)-1};

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

FirstAndLast(arr,n,k);


     
}