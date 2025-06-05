#include<bits/stdc++.h>
using namespace std;


//[1,2,3,4,5,6] = [2,3,4,5,6,1]
void leftRotate(int arr[],int n){

    int temp=arr[0];
    for(int i=1;i<n;i++){
        if(n-1>i){
            arr[i-1]=arr[i];
        }
        else{
            arr[i-1]=arr[i];
            arr[i]=temp;
        }

    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    leftRotate(arr,n);

    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }

}