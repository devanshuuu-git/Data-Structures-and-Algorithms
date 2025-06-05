#include<iostream>
using namespace std;



// void selection_sort(int arr[], int n){
//     for(int i=0;i<=n-2;i++){
//         int minimum = i;

//         for(int j=i;j<=n-1;j++){
//             if(arr[j]<arr[minimum]){
//             minimum = j; 
//         }
//         }
//         int temp= arr[minimum];
//         arr[minimum] = arr[i]; 
//         arr[i]= temp;  
//     } 
    
// }

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selection_sort(arr,n);

    // int largest = arr[n-1]; 
    // int secondLarge=-1;

    // for(int i=n-2;i>=0;i--){
    //     if(arr[i]!=largest){
    //         secondLarge=arr[i];
    //         break;
    //     }
        
    // }
    // cout<<endl<<secondLarge;
    int largest = 1;
    int secondLARGEST=-1;
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
        secondLARGEST=largest;
        largest = arr[i];
        }
    }
    cout<<"Largest " <<largest<<endl;;
    
    
    // for(int i=0;i<n;i++){
    //     if(arr[i]>secondLARGEST && arr[i]!=largest){
    //         secondLARGEST=arr[i];
    //     }
    // }
    cout<<"Second Largest "<<secondLARGEST;
    return 0;
}   