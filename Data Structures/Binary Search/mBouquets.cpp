#include<bits/stdc++.h>
using namespace std;


    int possible(vector<int>& bloomDay, int mid, int m, int k){
        int n = bloomDay.size();
        int nOfB = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=mid){
                cnt++;
                if(cnt==k){
                    nOfB++;
                    cnt = 0;
                }
            }else{
                cnt = 0;
            }
        }
        
        return nOfB;
    }

    int findMin(vector<int>& arr) {
        int minElement = arr[0];  // assume first element is min
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < minElement) {
                minElement = arr[i];
            }
        }
        return minElement;
    }

    int findMax(vector<int>& arr) {
        int maxElement = arr[0];  // assume first element is max
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int ans = -1;
        if(n < (long long)m*k){
            return -1;
        }
        int low = findMin(bloomDay);
        int high = findMax(bloomDay);

        while(low<=high){
            int mid = low +((high-low)/2);
            int possibility = possible(bloomDay, mid, m, k);

            if(possibility>=m){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }


int main() {
    int n;
    cout << "Enter the number of flowers: ";
    cin >> n;

    vector<int> bloomDay(n);
    cout << "Enter the bloom days of each flower: ";
    for (int i = 0; i < n; i++) {
        cin >> bloomDay[i];
    }

    int m, k;
    cout << "Enter the number of bouquets (m): ";
    cin >> m;
    cout << "Enter the number of flowers per bouquet (k): ";
    cin >> k;

    int result = minDays(bloomDay, m, k);

    if (result != -1) {
        cout << "Minimum number of days required: " << result << endl;
    } else {
        cout << "It's not possible to make " << m << " bouquets with " << k << " flowers each." << endl;
    }

    return 0;
}