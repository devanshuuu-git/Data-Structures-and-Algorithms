#include<bits/stdc++.h>
using namespace std;

// brute force
void moveZeroes(vector<int>& nums) {
        int n =nums.size();

        vector<int> temp;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }else{
                cnt++;
            }
        }
        for(int i=0;i<cnt;i++){
            temp.push_back(0);
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
    }

// optimal
void MoveZeroes(vector<int>& nums) {
        int n =nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1)return;
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
}

int main(){
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    //moveZeroes(arr);
    MoveZeroes(arr);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
}