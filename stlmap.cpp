#include<bits/stdc++.h>

using namespace std;

int main(){

    map<int,string> m;

    m[1] ="Jashank";
    m[2] = "Jain";
    m [13] = " & hello";
    m[6] = "Bhagoria";

    m.insert( {5 , "ji ji"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;

    cout<<"FInding 13 " <<m.count(5)<<endl;

    m.erase(5);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it = m.find(6);

    for(auto i = it ; i!=m.end();i++){

        cout<<(*i).first<<endl;
    }


    //  o (log n) in  this map  
    //  o(1) in unordered map


    
    return 0;
}