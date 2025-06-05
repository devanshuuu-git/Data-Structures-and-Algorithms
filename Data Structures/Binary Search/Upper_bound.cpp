#include<iostream>
using namespace std;

// lower bound -> smallest index such that arr[ind]> x



int UpperBound(int arr[], int n, int k){
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


int main(){
int n;
int k;
cout<<"Array Size:"<<endl;
cin>>n;

cout<<"Input Array:"<<endl;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Input Target:"<<endl;
cin>>k;


int ans = UpperBound(arr,n,k);
cout<<"Upper Bound at Index:"<<ans;

}