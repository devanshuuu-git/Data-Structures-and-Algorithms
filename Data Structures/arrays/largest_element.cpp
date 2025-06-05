#include<iostream>
using namespace std;

int main(){

int arr[5]= {3,5,7,2,6};
int largest = arr[0];

for(int i=0;i<5;i++){
    if(arr[i]>largest){
        largest = arr[i];
    }
}
cout<<largest;

return 0;
}