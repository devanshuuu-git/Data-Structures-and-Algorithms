#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{

    // next_permutation(nums.begin(), nums.end());
    int n = nums.size();
    int ind = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind != -1)
    {
        for (int i = n - 1; i > ind; i--)
        {
            if (nums[i] > nums[ind])
            {
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin() + ind + 1, nums.end());
    }
    else
    {
        reverse(nums.begin(), nums.end());
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    nextPermutation(nums);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    }
