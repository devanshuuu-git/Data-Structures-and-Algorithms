#include<bits/stdc++.h>
using namespace std;


    int possibility(vector<int>& nums, int mid, int days){
        int n = nums.size();
        int d = 1;
        int cap = 0;
        for(int i=0; i<n; i++){
            cap = cap + nums[i];
            if(cap > mid){
                d++;
                cap = nums[i];
            }
        }
        if(d > days){
            return d;
        }
        return d;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = -1;

        while(low<=high){
            int mid = low + ((high-low)/2);
            int d = possibility(weights, mid, days);

            if(d <= days){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }

    int main(){
        int n, days;
        cout << "Enter number of packages: ";
        cin >> n;

        vector<int> weights(n);
        cout << "Enter weights of packages: ";
        for (int i = 0; i < n; i++) {
            cin >> weights[i];
        }

        cout << "Enter number of days: ";
        cin >> days;

        cout << "Minimum ship capacity: " << shipWithinDays(weights, days) << endl;
        return 0;
    }