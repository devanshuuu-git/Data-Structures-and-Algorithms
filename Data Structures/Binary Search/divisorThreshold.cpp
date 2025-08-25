#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int>& arr) {
    int maxElement = arr[0];  // assume first element is max
    for(int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int possibility(vector<int>& nums, int mid, int threshold){
    int n = nums.size();
    int total = 0;
    for(int i=0; i<n; i++){
        total = total + (nums[i] + mid - 1) / mid;
        if (total > threshold) return total; 
    }
    return total;
}

int smallestDivisor(vector<int>& nums, int threshold) {
        
    int low = 1;
    int ans = 0;
    int high = findMax(nums);

    while(low<=high){
        int mid = low + ((high-low)/2);
        int k = possibility(nums, mid, threshold);

        if(k<=threshold){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
            
    }
    return ans;
}
int main(){
    int n, threshold;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    cout << "Enter threshold: ";
    cin >> threshold;

    cout << "Smallest Divisor: " << smallestDivisor(nums, threshold); 

    return 0;
}