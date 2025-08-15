#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int n = intervals.size();

        for(int i=0;i<n;i++){
            // int start = intervals[i][0];
            // int end = intervals[i][1];

            // if(!ans.empty() && end <= ans.back()[1]){
            //     continue;
            // }

            // for(int j=i+1;j<n;j++){
            //     if(intervals[j][0] <= end){
            //         end = max(end, intervals[j][1]);
            //     }
            //     else{
            //         break;
            //     }
            // }
            // ans.push_back({start,end});

            if(ans.empty() || intervals[i][0]>ans.back()[1]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }

        return ans;
    }

    int main() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter intervals (start end):\n";
    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> merged = merge(intervals);

    cout << "Merged intervals: ";
    for (auto &v : merged) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
    cout << endl;

    return 0;
}