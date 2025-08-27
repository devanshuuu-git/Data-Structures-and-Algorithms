#include<bits/stdc++.h>
using namespace std;


    bool canPaint(vector<int> &nums, int mid, int painter){
        int cntPainter = 1;
        int paint = 0;
        for(int i=0;i<nums.size();i++){
            paint = paint + nums[i];
            if(paint > mid){
                cntPainter++;
                paint = nums[i];
            }
            if(cntPainter > painter){
                return false;
            }
        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int ans = -1;
        while(low<=high){
            int mid = low + ((high-low)/2);
            bool possible = canPaint(nums, mid, k);
            
            if(possible == true){
                ans = mid;
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }

int main(){
     int n, k;
    cout << "Enter number of boards: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter board lengths: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter number of painters: ";
    cin >> k;

    int result = splitArray(nums, k);
    cout << "Minimum time required: " << result << endl;

    return 0;
}