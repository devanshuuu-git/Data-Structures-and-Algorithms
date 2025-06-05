#include <bits/stdc++.h>
using namespace std;

void print1(){
    for(int i=0; i < 6; i++){
        for(int j=0; j < 6; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void print2(){
    for(int i=1;i<6;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(){
    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}


void print4(){
    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void print5(){
    for(int i=0;i<6;i++){
        for(int j=0;j<6-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print6(){
    for(int i=0;i<6;i++){
        for(int j=1;j<6-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}


void print7(){
    for(int i=1;i<6;i++){

        for(int j=1;j<6-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main()
{
    print7();

    return 0;
}