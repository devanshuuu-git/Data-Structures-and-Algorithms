#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"Input Size of Array: ";
    cin>>n;
    int arr[n];
    map<long,long> mpp;

    for(int i=0;i<n;i++){
        cout<<"Input Array: ";
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cout<<"Number Of Querry: ";
    cin>>q;

    while(q--){
        int number;
        cout<<"Input Querry Number: ";
        cin>>number;
        cout<<"Frequency Of The Number: "<<mpp[number]<<endl;
    }
}