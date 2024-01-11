
#include <iostream>
 using namespace std;
 
 class Node {
   public:
   
   int data;
   Node* next;
   
   Node(int data){
       this -> data = data;
       this -> next = NULL;
       
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
 
 void insertAthead(Node* &head ,Node* &tail, int d){
     
    //  creating a new node
    
    if( head == NULL){
    Node* temp = new Node(d);
        head =temp;
        tail =temp;
    }
    else{
          Node* temp = new Node(d);
          temp -> next = head;
          head =temp;
    } 
   
    
    
 }
 
 void insertAtail( Node*&head , Node* &tail , int d){
     
     if(tail == NULL){
      Node* temp = new Node(d);
        tail =temp;
        head =temp;
     }
     else{
      Node* temp = new Node(d);
      tail -> next = temp;
      tail =temp;   // or tail = tail->next;
    //  creating a new node for tail;
     }
   
 }
 
 void print( Node* &head){
     
     Node* traverse  = head;
     while(traverse != NULL){
         cout<<traverse -> data<<" ";
         traverse = traverse -> next;
     }
     
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
         insertAtail(head, tail,d);
         return;
     }
     
      //  creating a new node for mid
      Node * nodetoinsert = new Node(d);
      nodetoinsert -> next = temp -> next;
      temp ->next = nodetoinsert;
      
 }

 void deletion(Node* &head , Node* &tail,int position){

    // delete the first node if n =1;
    if(position == 1){
        Node *temp  = head;
        head = head ->next;
        temp ->next = NULL;
        delete temp;
    }
    
    // delete the last or mid node 
    else{
        Node * curr = head;
        Node * prev = NULL;
        int cnt =1;
        while(cnt<position){
            prev = curr;
            curr = curr ->next;
            cnt++;
        }
        if(curr ->next ==NULL){
            tail = prev;
        }
        prev ->next =curr ->next;
        curr ->next = NULL;
        delete curr;
    }
 }
 
 
int main() {
    
    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    
    insertAthead(head ,tail,1);
    insertAthead(head ,tail,5);

     insertAtail(head, tail ,45); 
     insertAtail(head, tail ,452); 

    insertAtmid(head ,tail ,3,55);
    insertAtmid(head ,tail ,1,24);
    insertAtmid(head ,tail ,7,90);

        print(head);
        cout<<endl;
        cout<<"head "<< head ->data<<endl;
        cout<<"tail "<< tail ->data<<endl;

    deletion(head ,tail, 3);
    deletion(head ,tail, 1);
    deletion(head ,tail, 5);
           print(head);
           cout<<endl;
           cout<<"head "<< head ->data<<endl;
           cout<<"tail "<< tail ->data<<endl;
       
    
    return 0;
}