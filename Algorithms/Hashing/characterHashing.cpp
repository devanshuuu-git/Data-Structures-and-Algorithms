#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Input String: ";
    cin>>s;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }

    int q;
    cout<<"Number Of Querry: ";
    cin>>q;

    while(q--){
        char c;
        cout<<"Input Querry Char: ";
        cin>>c;

        cout<<"Frequency Of The Char: "<<hash[c-'a']<<endl;

    }
}