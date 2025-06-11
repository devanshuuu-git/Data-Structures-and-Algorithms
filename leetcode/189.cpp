#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>& arr, int k) {

        int n = arr.size();
        k = k%n;
        
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        
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