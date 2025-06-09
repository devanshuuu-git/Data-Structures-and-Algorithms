#include<iostream>
#include<vector>
using namespace std;

void quickSort(vector<int>& arr){

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

    quickSort(arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}