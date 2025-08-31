#include<bits/stdc++.h>
using namespace std;


int findElement(int n, int r) {
    int res = 1;
    for(int i = 0; i < r; i++) {
        res = res*(n - i);
        res = res/(i + 1);
    }

    return res;
}

// brute force using nCr
int pascalTriangle(int n) {
    for(int c=1;c<=n;c++) {
            cout << findElement(n-1,c-1) << " ";
        }
        cout << endl;
}


// Optimized approach using the property of Pascal's Triangle
int pascalTriangle2(int n) {
    long long ans = 1;
    cout << ans << " "; // printing 1st element

    //Printing the rest of the part:
    for (int i = 1; i < n; i++) {
        ans = ans * (n - i);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;

}


int main(){
    int n;
    cin>>n;
    int ans = pascalTriangle2(n);



}