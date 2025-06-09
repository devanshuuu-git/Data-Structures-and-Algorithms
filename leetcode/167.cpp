// array should be sorted and when returing index Increment them by 1
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int k) {
        int left = 0, right = arr.size() - 1;
        while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == k) {
            return {left+1,right+1};
        }
        else if (sum < k) left++;
        else right--;
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

    vector<int> ans = twoSum(arr, k);

    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;

    

}