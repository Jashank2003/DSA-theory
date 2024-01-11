#include<bits/stdc++.h>
#include<algorithm>


using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
    v.push_back(12);

    cout<<binary_search(v.begin() , v.end() , 8)<<endl;
    cout<<"Lower bound--> "<<lower_bound(v.begin() , v.end() , 8) -v.begin()<<endl;
    cout<<"upper bound--> "<<upper_bound(v.begin() , v.end() , 8) -v.begin()<<endl;

    int a =4;
    int b = 5;

    cout<<max(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string abs = "Jashank";
    reverse(abs.begin() ,abs.end());

    cout<<abs<<endl;

    rotate(v.begin(), v.begin()+2 ,v.end());
    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    sort(v.begin(),v.end());
    //  based on intro sort combination of quick ,insertion.heap
    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;



    return 0;
}
