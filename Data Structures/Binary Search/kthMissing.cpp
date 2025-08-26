#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
        int n= arr.size();

        int low = 0;
        int high = n-1;

        while(low<=high){
            int mid = low + ((high-low)/2);
            int missing = arr[mid]-(mid+1);

            if(missing < k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        } 
        // for(int i = 0; i<n; i++){
        //     if(k >= arr[i]){
        //         k++;
        //     }
        // }
        // return k;
        return low+k;
    }

    int main(){
        int n, k;
        cout << "Enter size of array: ";
        cin >> n;

        vector<int> arr(n);
        cout << "Enter Positive sorted array elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "Enter k: ";
        cin >> k;

        int result = findKthPositive(arr, k);
        cout << "The " << k << "-th missing positive number is: " << result << endl;

        return 0;
    }