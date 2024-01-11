#include<bits/stdc++.h>

using namespace std;

class node {
   public:

   int data;
   node* left;
   node* right;

   node(int d){
    this ->data = d;
    this ->left  = NULL;
    this ->right = NULL;
   }

};

node* buildTree(node*root){
    cout<<"Enter the  node data: ";
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)
        return NULL;
    
    cout<<"Enter The data of left child of "<<data<<": " ;
    root ->left = buildTree(root->left);
    cout<<"Enter The data of right child of "<<data<<": " ;
    root ->right = buildTree(root->right);

    return root;


   }

node * buildfromlvlordertraversal(node* &root){
        queue<node*> q;
        cout<<"Enter data for Root"<<endl;
        int data;
        cin>>data;
        root = new node(data);
        q.push(root);

        while(!q.empty()){
            node * temp = q.front();
            q.pop();
            cout<<"Enter the left Node of "<<temp->data<<":"<<endl;
            int leftData;
            cin>>leftData;

            if(leftData != -1){
                temp ->left = new node(leftData);
                q.push(temp ->left);
            }

            cout<<"Enter the right Node of "<<temp->data<<":"<<endl;
            int rightData;
            cin>>rightData;

            if(rightData != -1){
                 temp ->right = new node(rightData);
                q.push(temp ->right);
            }

            
        }
        return root;
}

void lvlOrderTraversal(node* root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);   
    
    while(!q.empty()){
        node *temp = q.front();
        if(temp !=NULL)
        cout<<temp ->data<<" ";
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }

        else{
        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }

        }
    }
}

void lvlOrderTraversalReversal(node* root){

    queue<node*> q;
    stack<int> s;
    q.push(root);
    q.push(NULL);   
    
    while(!q.empty()){
        node *temp = q.front();
        if(temp !=NULL)
        s.push(temp->data);
        // cout<<temp ->data<<" ";
        q.pop();

        if(temp == NULL){
            // cout<<endl;
            if(!q.empty()){
                q.push(NULL);
                s.push(-1);
            }
                
        }

        else{
        

        if(temp->right){
            q.push(temp->right);
        }
        
        if(temp->left){
            q.push(temp->left);
        }

        }
    }

    while(!s.empty()){
        int data = s.top();
        s.pop();
        if(data == -1){
             
              cout<<endl;
        }
        else{
            cout<<data<<" ";
        }
       
    }
}


void inorder(node* root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}



int main(){
    
    node* root = NULL; 
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // root = buildTree(root);
    // cout<<endl;
    buildfromlvlordertraversal(root);
    lvlOrderTraversal(root);
    // cout<<endl;
    //lvlOrderTraversalReversal(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;
    // postorder(root);


    return 0;
}