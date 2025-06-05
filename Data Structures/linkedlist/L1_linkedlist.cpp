#include<bits/stdc++.h>
using namespace std;
// count of LL, arr to LL, Print LL, search in LL

struct Node{
    
    int data;
    Node* next;

    
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


Node* convertarr2ll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int printLinkedList(Node* temp) {
    int cnt=0;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    cout<<endl;
    return cnt;
}

int main(){

vector<int> arr = {2,4,7,3};

Node* head = convertarr2ll(arr);
cout<<head->data<<endl;

Node* temp = head;
cout<<printLinkedList(temp);
}