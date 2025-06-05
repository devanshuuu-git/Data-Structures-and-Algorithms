#include<iostream>
using namespace std;


bool Prime(int n){

    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int n;
    cin>>n;

    
 
    cout<<Prime(n);

    return 0;
}