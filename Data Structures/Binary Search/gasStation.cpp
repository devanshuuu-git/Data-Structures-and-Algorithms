#include<bits/stdc++.h>
using namespace std;
int numberOfGasStationsRequired(long double dist, vector<int> &arr) {
    int n = arr.size(); // size of the array
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        int numberInBetween = ((arr[i] - arr[i - 1]) / dist);
        if ((arr[i] - arr[i - 1]) == (dist * numberInBetween)) {
            numberInBetween--;
        }
        cnt += numberInBetween;
    }
    return cnt;
}

long double MMinimiseMaxDistance(vector<int> &arr, int k) {
    int n = arr.size(); //size of array.
    long double low = 0;
    long double high = 0;

    for(int i = 0; i<n-1; i++){
        high = max(high,(long double)(arr[i-1]-arr[i]));
    }
    long double diff = 1e-6;
    while (high - low > diff) {
        long double mid = (low + high) / (2.0);
        int cnt = numberOfGasStationsRequired(mid, arr);
        if (cnt > k) {
            low = mid;
        }
        else {
            high = mid;
        }
    }
return high;
    
}

long double MinimiseMaxDistance(vector<int> &arr, int k) {
    int n = arr.size(); //size of array.
    vector<int> howMany(n - 1, 0);

    //Pick and place k gas stations:
    priority_queue<pair<long double, int>> pq;
    for(int i=0; i<n-1; i++){
        pq.push({arr[i+1]-arr[i], i});
    }

    for (int gasStations = 1; gasStations <= k; gasStations++) {
        auto tp = pq.top(); pq.pop();
        int secInd = tp.second;
        howMany[secInd]++;
        long double iniDiff = arr[secInd + 1] - arr[secInd];
        long double newSecLen = iniDiff/(long double)(howMany[secInd]+1);
        pq.push({newSecLen, secInd});
    }

    return pq.top().first;
}


// brute force
long double minimiseMaxDistance(vector<int> &arr, int k) {
    int n = arr.size(); //size of array.
    vector<int> howMany(n - 1, 0);

    //Pick and place k gas stations:
    for (int gasStations = 1; gasStations <= k; gasStations++) {
        //Find the maximum section
        //and insert the gas station:
        long double maxSection = -1;
        int maxInd = -1;
        for (int i = 0; i < n - 1; i++) {
            long double diff = arr[i + 1] - arr[i];
            long double sectionLength =
                diff / (long double)(howMany[i] + 1);
            if (sectionLength > maxSection) {
                maxSection = sectionLength;
                maxInd = i;
            }
        }
        //insert the current gas station:
        howMany[maxInd]++;
    }

    //Find the maximum distance i.e. the answer:
    long double maxAns = -1;
    for (int i = 0; i < n - 1; i++) {
        long double diff = arr[i + 1] - arr[i];
        long double sectionLength =
            diff / (long double)(howMany[i] + 1);
        maxAns = max(maxAns, sectionLength);
    }
    return maxAns;
}


int main(){
    int n;
    cout<<"Enter the number of Gas Station: ";
    cin>>n;

    vector<int> arr;
    cout<<"Enter the co-ordinates of gas stations: ";
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int k;
    cout<<"Enter Number of gas stations to be added: ";
    cin>>k;

    cout<<"The Minimized Max Distance is: "<<MinimiseMaxDistance(arr, k);
    return 0;
}