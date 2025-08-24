#include<bits/stdc++.h>
using namespace std;


int Sqrt(int n){
    int low = 0;
    int high = n;
    int ans = 0;

    while(low<=high){
        int mid = low + ((high-low)/2);

        if(mid*mid<=n){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int sqrt(int n){
    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(i*i<=n){
            ans = i;
        }
        else{
            break;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter Element: ";
    cin>>n;

    cout<<"Sqrt of the Integer: "<<Sqrt(n);
}