#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<string> s;

    s.push("Jashank");
    s.push("Bhagoria");
    s.push("Jain");
    s.peep(2);
    s.pop();


   cout<<s.top();


    return 0;
}