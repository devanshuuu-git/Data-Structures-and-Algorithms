// worst & average    n^2
// best  n complexity

#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){

    for(int i=n-1; i>=1; i--){
        int swap=0;
        for(int j=0; j<=i-1; j++){

            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = 1;
            }
        }
        if(swap==0){
            break;
        }
        
    }
}


int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubbleSort(arr,n);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;

}