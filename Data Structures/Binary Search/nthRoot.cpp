#include<bits/stdc++.h>
using namespace std;

int value(int i, int root, int num){
    int value = 1;
    for(int j = 0; j<root; j++){
        value = value*i;
        if(value>num){
            break;
        } 
    }
    return value;
}

int Sqrt(int num, int root){
    int low = 0;
    int high = num;
    

    while(low<=high){
        int mid = low + ((high-low)/2);
        int val = value(mid, root, num);
        if(val==num){
            return mid;
        }
        else if(val<num){
            low= mid+1;
        }
        else{
            high =mid-1;
        }
    }
    return -1;
}

int sqrt(int num, int root){
    int ans = 0;
    for(int i = 1; i<=num; i++){
        int val = value(i, root, num);
        if(val==num){
            return i;
        }else if(val>num){
            break;
        }
    }
    return -1;
}

int main(){
    int num, root;
    cout<<"Enter Element: ";
    cin>>num;

    cout<<"Enter nth root: ";
    cin>>root;

    cout<<"Sqrt of the Integer: "<<Sqrt(num,root);
}