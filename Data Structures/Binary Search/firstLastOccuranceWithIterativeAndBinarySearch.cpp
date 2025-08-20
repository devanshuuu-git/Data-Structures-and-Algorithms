#include<bits/stdc++.h>
using namespace std;


int lastOccurrance(vector<int> arr, int n, int k){
    int low = 0;
    int high = n-1;
    int last = -1;

    while(low <= high){
        int mid = low + ((high-low)/2);

        if(arr[mid] == k){
        last = mid;
        low = mid+1;
        }
        else if(arr[mid] < k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return last;
}

int firstOccurance(vector<int> arr, int n, int k){
    int low = 0;
    int high = n-1;
    int first = -1;

    while(low <= high){
        int mid = low + ((high-low)/2);

        if(arr[mid] == k){
        first = mid;
        high = mid-1;
        }
        else if(arr[mid] < k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return first;
}


vector<int> searchRange(vector<int> &arr, int n, int k){
    int first = firstOccurance(arr, n, k);
    if(first == -1){
        return {-1,-1};
    }
    int last = lastOccurrance(arr, n, k);
    return {first, last};

}

// iterative method
vector<int> FirstAndLast(vector<int> &arr, int n, int k){
    int first = -1, last = -1;
    for(int i=0; i<n;i++){

        if(arr[i] == k){
            if(first == -1){
            first = i;
            }
            last = i;
        }
    }
    if(first == -1){
        return {-1,-1};
    }
    return {first,last};
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

vector<int> ans = searchRange(arr,n,k);

for(int it: ans){
    cout<<it<<" ";
}
}