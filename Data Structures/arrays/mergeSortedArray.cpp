#include <bits/stdc++.h>
using namespace std;




void Sort(vector<int>& num1, vector<int>& num2, int m, int n){
    int left = m-1;
    int right = 0;
    while(left>=0 && right<n){
        if(num1[left]>num2[right]){
            swap(num1[left],num2[right]);
            left--;
            right++;
        }else{
            break;
        }
    }
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
}


void swapIfGreater(vector<int>& num1, vector<int>& num2, int index1, int index2){
    if(num1[index1] > num2[index2]){
        swap(num1[index1],num2[index2]);
    }
}

void GapSort(vector<int>& num1, vector<int>& num2, int m, int n){
    int len = m+n;
    int gap = (len/2) + (len%2);
    while(gap>0){
        int left = 0;
        int right = left+gap;

        while(right<len){
            //num1 and num2 both engaged
            if(left < n && right >= n){
                swapIfGreater(num1, num2, left, right-n);
            }
            else if(left >= n){
                swapIfGreater(num1, num2, left-n, right-n);
            }
            else{
                swapIfGreater(num1, num2, left, right);
            }
            left++;
            right++;
        }
        if(gap == 1) break;
        gap = (gap / 2) + (gap % 2);
    }
}



int main() {
    int n, m;
    
    
    cout << "Enter size of first array (m): ";
    cin >> m;
    cout << "Enter size of second array (n): ";
    cin >> n;

    vector<int> num1(m), num2(n);

    cout << "Enter " << m << " sorted elements for first array: ";
    for (int i = 0; i < m; i++) {
        cin >> num1[i];
    }

    cout << "Enter " << n << " sorted elements for second array: ";
    for (int i = 0; i < n; i++) {
        cin >> num2[i];
    }

    GapSort(num1,num2,m,n);

    cout << "\nFirst array: ";
    for (int i = 0; i < m; i++) {
        cout << num1[i] << " ";
    }

    cout << "\nSecond array: ";
    for (int i = 0; i < n; i++) {
        cout << num2[i] << " ";
    }

    cout << endl;
    return 0;
}
