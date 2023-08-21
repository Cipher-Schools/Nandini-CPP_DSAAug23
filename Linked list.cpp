// class name {
//     private :
//     int identity ;
//     public :
//     int getter(){
//         return this->identity;
//     }
//     void setter(int value){
//         this->identity = value;
//     }
// }



// int main(){
//     name rohan;
//     rohan.setter(12);
//     cout<<rohan.getter()<<" ";
// }

//LINKED LIST IMPLEMENTATION 
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
//creating a node and allocating value
Node* addNode(int val){
    Node* node = new Node ;//allocating memory 
    node->data = val;
    node->next = nullptr;
    
    return node;
}
//append a node to lineked list -> create a linked list 
// linked list : 1 2
// 1->next = 2 
// 2->next = 3


// input :  3 4 5 6 

Node* append(Node* head, int val){
    //1.creating a node out of it 
    Node* random = addNode(val);
    //2.adding element
    if(head==nullptr){
        head=random;
    }
    else{
        //finding the last node
        Node* curr = head;
        while(curr->next!=nullptr){
            curr = curr->next;
        }
        curr->next = random;
    }
    return head;
}
Node* insertFront(Node* &head, int val)
{
    Node* newnode = addNode(val);
    newnode->next = head;
    head = newnode;
    return head;
}

// 6->new node , 

// 1 2 3 4 5-> head 

// 6->next = head
// 6->next = 1->2>3->4->5

// new node : 6->1->2->3->4->5

// head = new node

// head = 6->1->2->3->4->5->6


//insert a node at the first position or top of the linked list 
// 1 2 3 4 5 , 6 => 6 1 2 3 4 5

//DELETE A NODE WITH VALUE EQUALS TO K

Node* deleteNode(Node* head, int k){
    //cases : 1. if the DS is empty or not : NULL CHECK
    
    if(!head){
        return head;
    }
    // if head->val ==k itself 
    
    if(head->data==k){
        //1 2 3 4, delete(1) : Node* curr = head->next ,  delete(head) : head = curr = 2 3 4 
        
        
        Node* curr = head->next;
        delete(head);
        head = curr;
    }
    else{
        
        /*
        
        1 2 3 4 5 
        
        value = k, k =3;
        
        prvious = 2 , curr = 3
        
        previous->next = curr-,>next
        2->next = 4 
        
        */
         Node* previous = nullptr;
         Node* curr = head;
         while(curr!=nullptr&&curr->data!=k){
             previous = curr;
             curr = curr->next;
         }
         previous->next = curr->next;
         delete(curr);
    }
    return head;
}

//DELETE THE FIRST NODE 

1 2 3 3 3 

while(temp->next!=nullptr){
    if(temp->data==temp->next->data){
        temp->next = (temp->next)->next;
    }
    else{
        temp = temp->next;
    }
}



int main(){
    Node* head = addNode(7);
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        head = append(head,m);
    }
    
    
    int temp;
    cin>>temp;
   head = deleteNode(head,temp);
    Node* curr = head;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}