#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(3);
    d.push_front(1);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<d.at(0);
    d.pop_front();
    cout<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.push_back(2);
    d.push_front(4);
    d.push_back(6);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.begin() , d.begin()+2);

    for(int i:d){
        cout<<i<<" ";
    }
    
    
    
    return 0;
}