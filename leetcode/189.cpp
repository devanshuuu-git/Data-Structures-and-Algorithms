#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>& arr, int k) {

        int n = arr.size();
        k = k%n;
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
    }



int main(){
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k;
    cin>>k;
    rotate(arr, k);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
}