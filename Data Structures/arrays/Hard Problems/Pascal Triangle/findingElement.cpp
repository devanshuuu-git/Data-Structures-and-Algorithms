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


int main(){
    int n,r;
    cin>>n;
    cin>>r;

    

    int ans = findElement(n-1, r-1);

    cout << ans;

    

}