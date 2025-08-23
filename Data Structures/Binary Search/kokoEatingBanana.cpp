#include<bits/stdc++.h>
using namespace std;

long long calculateHours(vector<int>& piles, int hourly){
        int n = piles.size();
        long long totalH = 0;
        for (int i = 0; i < n; i++) {
            totalH += ceil((double)(piles[i]) / (double)(hourly));
        }
        return totalH;

    }


    int findMax(vector<int>& piles) {
        int n = piles.size();
        int maxVal = piles[0];
        for (int i = 1; i < n; i++) {
            if (piles[i] > maxVal) {
                maxVal = piles[i];
            }
        }
        return maxVal;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);
        int ans = INT_MAX;
        while(low<=high){
            int mid = low + ((high-low)/2);
            long long totalHours = calculateHours(piles, mid);

            if(totalHours<=h){
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
    int n, h;
    cout << "Enter number of piles: ";
    cin >> n;

    vector<int> piles(n);
    cout << "Enter the number of bananas in each pile: ";
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    cout << "Enter total hours (h): ";
    cin >> h;

    int result = minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;

    return 0;
}
