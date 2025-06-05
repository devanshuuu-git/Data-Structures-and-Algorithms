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

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
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



// insertion at the head of the LL
Node* insertHead(Node* head, int val){
     Node* temp = new Node(val, head);
    return temp;
}

// inserting at the  tail of the LL 
Node* insertTail(Node* head, int val){
    if(head==NULL){
        return new Node(val);
    }

    Node* temp =head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}
     
// insert the kth element LL
Node* insertK(Node* head, int val, int k){
    if(head==NULL){
        if(head==NULL){
            return new Node(val);
        }
        else{
            return head;
        } 
    } 
    if(k==1){
        return new Node(val,head);
    }
    int cnt=0;
    Node* temp =head;
    Node* prev = NULL;
    while(temp!= NULL){
        cnt++;
        if(cnt==(k-1) ){
            Node* x = new Node(val,temp->next);
            temp -> next = x;
            return head;
        }
        temp = temp -> next;
    }
    return head;
}
   

// inserting the element(with given value) infront of given value in LL
Node* insertV(Node* head,int val, int k){
    if(head==NULL) return NULL;
    if(head->data==k ){
        
        return new Node(val,head);
    }
    
    Node* temp =head;
    while(temp!= NULL){
        if(temp->next->data==k){
              Node* x = new Node(val,temp->next);
              temp->next=x;
              break;
        }
        temp = temp -> next;
    }
    return head;
}


int main(){
    vector<int> arr = {2,4,7,3,46,23,36};
    Node* head = convertarr2ll(arr);
    

    head = insertV(head, 46, 3);
    printLinkedList(head);

}