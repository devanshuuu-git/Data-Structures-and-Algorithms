#include<bits/stdc++.h>
using namespace std;


int LinearSearch(vector<int> nums,int n,int num){
    

    for(int i=0;i<n;i++){
        if(nums[i]==num){
            return i;
        }
    return -1;
    }
}



int main(){

    int n;
    cin >> n;
    
    vector<int> nums(n);  

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int num;
    cin>>num;

    cout<<LinearSearch(nums,n,num);
    

    return 0;

}