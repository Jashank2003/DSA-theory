#include<bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data ;
    Node * next;
    Node * prev;

    Node(int d){
        this ->data =d;
        this -> next =NULL;
        this ->prev = NULL;
    }
    ~Node(){
    int value = this ->data;
    if(this->next != NULL){
        delete next ;
        this ->next =NULL;
    }
        cout<<"Memory is Free for value :"<<value<<endl;
   }

};


void print( Node* &head){
    Node*temp =head;
    while(temp!= NULL){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

int getln(Node* & head){
     Node*temp =head;
     int len =0;
    while(temp!= NULL){
        len++;
        temp = temp ->next;
    }
    return len;

}
void insertAthead( Node* &head ,Node* &tail, int d){

//  creating new node 
    if(head == NULL){
        Node * temp = new Node(d);
        head =temp;
        tail =temp;
    }
    else{
    Node *temp = new Node(d);
    temp -> next =head;
    head -> prev = temp;
    head = temp;
    }   

}
void insertAtail( Node * &head, Node *&tail  ,int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        temp =tail;
        head =temp;
        tail = temp;
    }
    Node *temp = new Node(d);
    tail ->next = temp;
    temp ->prev = tail;
    tail = temp;

}
 void insertAtmid(Node* &head ,Node* &tail ,int position , int d){
    //  insert at head
     if (position ==1){
         insertAthead(head ,tail,d);
         return;
     }
     
     Node* temp = head;
     int cnt =1;
     while(cnt < position -1){
         temp = temp -> next;
         cnt++;
     }
     
     if ( temp -> next == NULL){
         insertAtail(head ,tail,d);
         return;
     }
     
      //  creating a new node for mid
      Node * nodetoinsert = new Node(d);
     nodetoinsert ->next = temp ->next;
     temp ->next ->prev = nodetoinsert;
     temp ->next =nodetoinsert;
     nodetoinsert ->prev =temp;     
 }

 void deletion( Node*&head ,Node*&tail , int pos){

    if(pos ==1){
        Node* temp =head;
        temp ->next ->prev = NULL;
        head = temp ->next;
        temp ->next = NULL;
       delete temp;
    }

    else{
        Node * curr = head;
        Node * prev = NULL;
        int cnt =1;
        while(cnt<pos){
            prev = curr;
            curr = curr ->next;
            cnt++;
        }
        if(curr ->next ==NULL){
            tail = prev;
        }
        curr ->prev = NULL;
        prev ->next = curr ->next;
        curr ->next =NULL;
        delete curr;
    }
 }

int main(){

    Node * node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAthead(head ,tail, 5);
    insertAthead(head ,tail, 11);
    insertAthead(head ,tail, 8);
    insertAtail(head, tail , 20);
    insertAtail(head, tail , 30);
    insertAtmid(head ,tail ,3,100);
    insertAtmid(head ,tail ,5,100);
    insertAtmid(head ,tail ,9,100);
    print(head);
    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data<<endl;
    cout<<getln(head)<<endl;

    deletion(head ,tail , 1);
    deletion(head ,tail ,8);
    deletion(head ,tail ,3);
    

    print(head);
    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data<<endl;
    // cout<<getln(head)<<endl;
    return 0;
}