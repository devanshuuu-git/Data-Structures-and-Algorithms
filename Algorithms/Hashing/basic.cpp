#include<iostream>
using namespace std;




int main(){

    int n;
    cout<<"Size of Array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Input Array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[100]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }


    int q;
    cout<<"No. of Queries:"<<endl;
    cin>>q;
     
    while(q--){
        int number;
        cout<<"Enter Number:"<<endl;
        cin>>number;

        cout<<"count:"<<hash[number]<<endl;
    }

    return 0;
}