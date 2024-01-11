#include<bits/stdc++.h>

using namespace std;

class Queue {
    public:
    int *arr;
    int front ;
    int rear;
    int size;

    Queue( int size){
        cout<<"constructer is created"<<endl;
        this ->size = size;
        int front = 0;
        int rear =0;

    }
 void push(int element){
    if(rear == size){
        cout<<"Queue is overflow"<<endl;
    }
    else{
        arr[rear]= element;
        rear++;
        cout<<element<<"is pushed"<<endl;
    }
 }

 void pop(int element){
    if(front == rear){
        cout<<"Queue is underflow"<<endl;
        // return -1;
    }
    else{
        cout<<arr[front]<<"is popped"<<endl;
        arr[front] == -1;
        front++;

        if(front == rear){
        front =0;
        rear = 0;
    }
    }
    

 }

 void  peek (){
    cout<<"front :"<<arr[front]<<endl;
    cout<<"rear :"<<arr[rear]<<endl;
 }

};

int main(){
    cout<<"hello"<<endl;

    Queue qu(40);
    qu.push(75);
    qu.push(23);
    qu.push(12);
    qu.peek();

    return 0;
}