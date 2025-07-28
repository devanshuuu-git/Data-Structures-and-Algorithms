#include <bits/stdc++.h>
using namespace std;


vector<int> pascalTriangle1(int n) {
    vector<int> result;
    long long ans = 1;
    result.push_back(ans);

    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        result.push_back(ans);
    }

    return result;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    for (int r = 1; r <= n; r++) {
        ans.push_back(pascalTriangle1(r));
    }

    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans = pascalTriangle(n);

    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;



}