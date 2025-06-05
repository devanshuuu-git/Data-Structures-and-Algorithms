#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){

    int sum = 0;
    int dup = n;
    int k = to_string(n).length();
    while(n>0){
        int lastDigit = n%10;
        sum = sum+pow(lastDigit,k);
        n = n/10;
    }
    if(dup==sum){
        return true;
    }
    else{
        return false;
    }
}




int main(){
    int n;
    cin>>n;

    cout<<armstrong(n);
}