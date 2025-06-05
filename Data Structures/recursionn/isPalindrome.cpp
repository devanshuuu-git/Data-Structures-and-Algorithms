#include<iostream>
using namespace std;

bool isPalindrome(string &s,int j){
    
    int n = s.size();

    if(j>=n/2){
        return true;
    }
    if(s[j]!=s[n-j-1]){
        return false;
    }
    return isPalindrome(s,j+1);
}

int main(){

    string s;
    cin>>s;

    bool ans = isPalindrome(s,0);
    
     if (ans == true) {
    cout << "Palindrome";
  } else {
    cout << "Not Palindrome";
  }
    return 0;
}