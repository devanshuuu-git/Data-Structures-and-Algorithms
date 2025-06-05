#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
    Node* back;
    // DLL contructors
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
 

Node* convertarr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* insertHead(Node* head, int val){
    
}
int main(){

    vector<int> arr = {2,4,7,3};

    Node* head = convertarr2DLL(arr);

}