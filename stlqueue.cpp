#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<string> s;

    s.push("Jashank");
    s.push("Bhagoria");
    s.push("Jain");
    cout<<s.front()<<endl;
    cout<<s.back()<<endl;


    
    return 0;
}