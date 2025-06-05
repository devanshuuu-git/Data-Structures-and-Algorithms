#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {

    int n = nums.size();
    k = k % n;  

    reverse(nums.begin(), nums.end() - k);   
    reverse(nums.end() - k, nums.end());     
    reverse(nums.begin(), nums.end());       
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);  

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    rotate(nums, k);
    printArray(nums);

    return 0;
}
