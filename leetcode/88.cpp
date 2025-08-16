#include <bits/stdc++.h>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int t = m+n;
        if(n!=0){
            for(int i=n; i>0;i--){
                swap(nums1[m+i-1],nums2[i-1]);
            }
        }
        sort(nums1.begin(),nums1.end());
    }

int main() {
    int m, n;

    cout << "Enter size of nums1 (m): ";
    cin >> m;
    cout << "Enter size of nums2 (n): ";
    cin >> n;

    vector<int> nums1(m + n), nums2(n);

    cout << "Enter " << m << " elements for nums1: ";
    for (int i = 0; i < m; i++) cin >> nums1[i];

    cout << "Enter " << n << " elements for nums2: ";
    for (int i = 0; i < n; i++) cin >> nums2[i];

    merge(nums1, m, nums2, n);

    cout << "\nMerged array: ";
    for (int x : nums1) cout << x << " ";
    cout << endl;

    return 0;
}
