#include<bits/stdc++.h>
using namespace std;


//lowerbound implementation
// finding index for the given element



int SearchInsertPosition(vector<int> &arr, int n, int k){
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


int main(){

int n;
int k;
cout<<"Array Size:"<<endl;
cin>>n;

cout<<"Input Array:"<<endl;
vector<int> arr;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
}

cout<<"Input Target:"<<endl;
cin>>k;


int ans = SearchInsertPosition(arr,n,k);
cout<<" Insertion at Index: "<<ans;
}