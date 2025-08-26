#include<bits/stdc++.h>
using namespace std;

bool canWe(vector<int> stalls, int mid, int cows, int n){
    int cntCows = 1;
    int last = stalls[0];
    for(int i=0;i<n;i++){
        if(stalls[i] - last >= mid){
            cntCows++;
            last = stalls[i];
        }
        if(cntCows>=cows){
            return true;
        }
    }
    return false;
}

int aggresiveCow(vector<int>& stalls, int cows){
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = stalls[n-1]-stalls[0];
    int ans = -1;
    while(low<=high){
        int mid = low + ((high-low)/2);
        bool possible = canWe(stalls, mid, cows, n);

        if(possible == true){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number of stalls: ";
    cin>>n;

    cout<<"Enter Co-Ordinates of the stalls: ";
    vector<int> stalls;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        stalls.push_back(x);
    }

    int cows;
    cout<<"Enter number of cows (minumum 2): ";
    cin>>cows;

    cout<<"Max of (Minimum Distance Between Two Cows): "<<aggresiveCow(stalls, cows);
}