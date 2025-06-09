#include<bits/stdc++.h>
using namespace std;


//brute force

vector<int> twoSum(vector<int>& arr, int k){
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j])continue;
            if(arr[i]+arr[j]==k){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }

        }
    }
    return {-1,-1};

}

//hash approach
vector<int> TwoSum(vector<int>& arr, int k){
    map<int,int> mpp;

    for(int i=0; i<arr.size();i++){
        int first = arr[i];
        int second = k-first;

        if(mpp.find(second)!= mpp.end()){
            return {mpp[second], i};
        }
        mpp[first]=i;
    }
    return {};
}

//optimal approach
vector<int> Twosum(vector<int>& arr, int k){
    map<int,int> mpp;

    for(int i=0; i<arr.size();i++){
        int first = arr[i];
        int second = k-first;

        if(mpp.find(second)!= mpp.end()){
            return {mpp[second], i};
        }
        mpp[first]=i;
    }
    return {};
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
    
    int k;
    cin>>k;

    vector<int> ans = TwoSum(arr, k);

    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;

    

}