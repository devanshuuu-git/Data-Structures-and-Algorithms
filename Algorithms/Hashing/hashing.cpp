#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"Input Size Of Array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Input Array: ";
        cin>>arr[i];
    }

    //precompute
    int hash[15]={0};
     for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    int q;
    cout<<"Number Of Querry: ";
    cin>>q;

    while(q--){
        int number;
        cout<<"Input Querry Number: ";
        cin>>number;
        cout<<"Frequency Of The Number: "<<hash[number]<<endl;
    }

    return 0;
}