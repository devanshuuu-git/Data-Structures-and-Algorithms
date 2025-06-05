#include<bits/stdc++.h>
using namespace std;


vector<int> moveZeros(vector<int> nums,int n){

    // vector<int> temp;

    // for(int i=0; i<n;i++){
    //     if(nums[i]!=0){
    //         temp.push_back(nums[i]);
    //     }
    // }

    // int nz= temp.size();

    // for(int i =0;i<nz;i++){
    //     nums[i]=temp[i];
    // }

    // for(int i=nz;i<n;i++){
    //     nums[i]=0;
    // }
    int j = -1;
    for(int i=0; i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }
    if(j== -1){
        return nums;
    }

    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }

    return nums;
}



int main(){

    int n;
    cin >> n;

    vector<int> nums(n);  

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

   vector<int> ans = moveZeros(nums,n);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';

    return 0;

}