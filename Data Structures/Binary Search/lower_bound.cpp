#include<bits/stdc++.h>
using namespace std;


// recusive approach
int Search(vector<int> &arr, int low, int high, int k){
    if (low > high) {
        return low;  // if there is element represents lower bound it will return n
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] < k) {
        
        return Search(arr, mid + 1, high, k);
    } else {
       // arr[mid]>=k 
        return Search(arr, low, mid - 1, k);
    }
}   

int lowerBoundSearch(vector<int> &arr, int n, int k){
    return Search(arr, 0, n-1, k);
}



// iterative approach
int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
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


cout<<lowerBoundSearch(arr,n,k);

}