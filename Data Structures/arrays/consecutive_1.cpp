#include<bits/stdc++.h>
using namespace std;



int Consecutive(vector<int>nums1,  int n){

    int maxi=0;
    int cnt=0;

    for(int i=0;i<n;i++){

        if(nums1[i]==1){
            cnt++;
            maxi = max(maxi,cnt); 
        }
        else{
            cnt = 0;
        }
    }
    return maxi;
}




int main(){

int n;
cin>>n;

vector<int>nums1(n);


for(int i=0;i<n;i++){
    cin>>nums1[i];
}



int ans = Consecutive(nums1,n);
   
    cout << ans;

}



