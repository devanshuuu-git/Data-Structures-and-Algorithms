#include<iostream>
using namespace std;



void insertionSort(int arr[], int n){

    for(int i=0; i<=n-1; i++){
        int swap=0;
        for(int j=i; j>=1;j--){
            if(arr[j-1]>arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }else{
                break;
            }    
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

    insertionSort(arr,n);

    cout<<"Sorted Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;

}