#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    vector<int> veco(5,4);
    // initialze the vector with the size 5 and all ele as 1
    vector<int> last(veco);
    //   initialize the vector with same properties as veco


cout<<"Size of the vector means capacity:"<<v.capacity()<<endl;
v.push_back(3);
v.push_back(2);
v.push_back(5);

// when vector size is 2 and when we want to add one more data in it then vector increses the capacity by double the older size 

cout<<"Size of the vector means capacity after pushing: "<<v.capacity()<<endl;
cout<<"size of the v vector:" <<v.size();

cout<<"point the element:"<<v.at(1)<<endl;
cout<<"Front ele :"<<v.front()<<endl;
cout<<" back ele: "<<v.back()<<endl;

cout<<"Before Pop"<<endl;

for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
cout<<endl;

cout<<"after Pop"<<endl;
v.pop_back();


for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
cout<<v.size()<<endl;
cout<<v.capacity();
cout<<endl;

v.clear();
cout<<v.size();
cout<<endl;

cout<<v.capacity();
// if we  use clear  than only the size of the vector becomes 0 nut the capacity or we can say the memory allocated to the vector remain same




    return 0;



}