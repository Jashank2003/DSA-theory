#include<bits/stdc++.h>

using namespace std;

int main(){

    //  in set no modificationn only we can add and delete , all elements should be unique  ,uordered set is faster than normal set

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(4);
    s.insert(12);
    s.insert(46);

for(int i :s){
    cout<<i<<" ";
}

cout<<endl;

set<int> :: iterator it = s.begin();
it++;

s.erase(it);

for(int i :s){
    cout<<i<<" ";
}

cout<<endl;


cout<<s.count(5)<<endl;

set<int> :: iterator itr = s.find(12);

cout<<"value present at iterator :"<<*itr<<" "<<&itr<<endl;

    return 0;
}