#include <iostream>
using namespace std;

void f(int i, int n){
    if(i>n){
        return;
    }
    cout<<"raj"<<endl;
    f(i+1,n);
}



int main(){
    int n, i=1;
    cin>>n;

    f(i,n);
    return 0;
}