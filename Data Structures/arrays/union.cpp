#include<bits/stdc++.h>
using namespace std;



vector<int> UnionArr(vector<int>nums1, vector<int>nums2, int n, int m){

    int i=0;
    int j=0;

    vector<int> UnionArr;
    while(i<n && j<m){
    
    if(nums1[i]<=nums2[j]){
        if(UnionArr.size()==0|| UnionArr.back()!=nums1[i]){
            UnionArr.push_back(nums1[i]);
            i++;
        }
    }
    else{
        if(UnionArr.size()==0|| UnionArr.back()!=nums2[j]){
            UnionArr.push_back(nums2[j]);
            j++;
        }
    }

    
    }
    return UnionArr;

    
}




int main(){

int n,m;
cin>>n>>m;

vector<int>nums1(n);
vector<int>nums2(m);

for(int i=0;i<n;i++){
    cin>>nums1[i];
}

for(int i=0;i<m;i++){
    cin>>nums2[i];
}

vector<int> ans = UnionArr(nums1, nums2, n, m);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';

}



