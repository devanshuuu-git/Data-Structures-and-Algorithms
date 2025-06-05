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

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

// Delete head
Node* deleteHead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev =head;
    head=head->next;

    head->back=nullptr;
    prev->next=nullptr;

    delete prev;
    return head;
}

// delete tail
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node* tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev = tail->back;
    prev->next=nullptr;
    tail->back=nullptr;

    delete tail;
    return head;
}

// Delete the kth element
Node* deleteK(Node* head, int k){
    if(head==NULL){
        return NULL;
    } 
    int cnt=0;
    Node* temp =head;
    while(temp!= NULL){
        cnt++;
        if(cnt==k){
              break;
        }
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev==NULL || front == NULL){
        return NULL;
    }
    else if(prev==NULL){
        deleteHead(head);
    }
    else if(front==NULL){
        deleteTail(head);
    }
    prev->next=front;
    front->back=prev;

    temp->back=nullptr;
    temp->next=nullptr;
    delete temp;
    
    return head;
}   


int main(){
    vector<int> arr = {1,34,54,12,8,4,2,6};
    Node* head= convertarr2DLL(arr);

    head = deleteK(head,1);
    print(head);

}