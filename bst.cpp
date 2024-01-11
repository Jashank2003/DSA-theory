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


int main() {
     Node * root = NULL;
     cout<< "enter the nodes "<<endl;
     takeinput(root);
    lvlOrderTraversal(root);
     return 0;
}