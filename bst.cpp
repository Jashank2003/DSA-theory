#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:

        int data;
        Node * left;
        Node * right;

        Node (int d){
            this ->data = d;
            this ->left = NULL;
            this ->right = NULL;
        }
};

Node* insertToBst(Node* root , int d){

    if(root == NULL){
        root = new Node(d);
        return root ; 
    }

    if( d >  root ->data ){
        root ->right = insertToBst(root ->right,d);

    }
    else{
        root ->left = insertToBst(root ->left , d);
    }
    return root ;
}

Node* minVal(Node * root ){
    Node * temp = root;
    if(temp == NULL)
    return NULL;

    while(temp ->left != NULL){
        temp = temp ->left;
    }
    return temp;
}

Node* deleteToBst(Node* root , int d){

    if(root == NULL)
    return NULL;

    if(root ->data  == d){
        // 0 child
         if(root ->left == NULL && root ->right == NULL){
            delete root;
            return NULL;
         }
        // 1 child
         if(root ->left != NULL && root ->right == NULL){
            Node * temp = root ->left;
            delete root;
            return temp;
        }
         if(root ->left == NULL && root ->right != NULL){
          Node * temp = root ->right;
            delete root;
            return temp;
        }
        // 2 child

        if(root ->left != NULL && root ->right != NULL){
            int mini = minVal(root ->right) -> data;
            root ->data = mini;
            root ->right = deleteToBst(root ->right ,mini);
            return root;
        }


    }
    else if(root ->data > d){
        
         root ->left = deleteToBst(root ->left ,d);
        return root;
    }
    else{
         root ->right = deleteToBst(root ->right ,d);
        return root;
    }
}

void takeinput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = insertToBst(root , data);
        cin>>data;

    }
}

void lvlOrderTraversal(Node * root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node * temp = q.front();
        q.pop();


        if(temp == NULL ){
             cout<<endl;

             if(!q.empty())
                    q.push(NULL);
        }
        else{
            cout<<temp ->data<<" ";
            if(temp ->left){
                q.push(temp ->left);
            }
                if(temp ->right){

                q.push(temp ->right);
                }
        }
    }
}

void inordertraversal(Node * root){

    //left root right
    if(root == NULL){
        return ;
    }

    inordertraversal(root ->left);
    cout<< root ->data<<" ";
    inordertraversal(root -> right);

    return;
}


int main() {
     Node * root = NULL;
     cout<< "enter the nodes "<<endl;
     takeinput(root);
    lvlOrderTraversal(root);
    cout<<endl;
    cout<<"INORDER traversal is:"<<endl;
    inordertraversal(root);
    deleteToBst(root , 50);
    cout<<endl;
     cout<<"INORDER traversal is:"<<endl;
    inordertraversal(root);
     return 0;
}