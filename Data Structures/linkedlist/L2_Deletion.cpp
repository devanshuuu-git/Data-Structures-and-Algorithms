#include<bits/stdc++.h>
using namespace std;
// insertion & deletion of LL

struct Node{
    
    int data;
    Node* next;
    
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

void printLinkedList(Node* temp) {
    
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
        
    }
    cout<<endl;
    
}



// deleting the head of the LL
Node* deleteHead(Node* head){
    if(head==NULL) return head; 

    Node* temp = head;
    head = head-> next;

    delete temp; //funtion to remove node

    return head;
}

// deleting the tail of the LL
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    Node* temp =head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return head;
}
     
// deleting the kth element LL
Node* deleteK(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp = head;
        head = head-> next;
        delete temp; 
        return head;
    }
    int cnt=0;
    Node* temp =head;
    Node* prev = NULL;
    while(temp!= NULL){
        cnt++;
        if(cnt==k){
              prev->next = prev->next->next;
              delete temp;
              break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}   
   

// deleting the  element with given value in LL
Node* deleteV(Node* head, int v){
    if(head==NULL) return head;
    if(head->data==v){
        Node* temp = head;
        head = head-> next;
        delete temp; 
        return head;
    }
    
    Node* temp =head;
    Node* prev = NULL;
    while(temp!= NULL){
        if(temp->data==v){
              prev->next = prev->next->next;
              delete temp;
              break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}


int main(){
    vector<int> arr = {2,6,345,5,3,3,4,6};
    Node* head = convertarr2ll(arr);
    

    head = deleteK(head, 8    );
    printLinkedList(head);

}