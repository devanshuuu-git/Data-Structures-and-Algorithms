#include<bits/stdc++.h>

using namespace std;
// {1,1,1,2,2,2,3,3}
int findUnique(int arr[], int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    } 
    return i+1;
}

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0; i<n;i++){
    cin>>arr[i];
}
int Num =findUnique(arr,n);
cout<<Num<<endl;
}