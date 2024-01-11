#include<bits/stdc++.h>

using namespace std;

int main(){
    
    priority_queue<int> max;
    priority_queue<int , vector<int> ,greater<int> > min ;

    // max.push(1);
    // max.push(3);
    // max.push(4);
    // max.push(8);

    // int n = max.size();

    // for(int i=0 ; i<n; i++){
    //     cout<<max.top()<<" ";
    //     max.pop();
    // //  in priority queue the greatest no . of all will be on the top
    // }
    cout<<endl;

     min.push(1);
    min.push(3);
    min.push(4);
    min.push(8);

    int n = min.size();

    for(int i=0 ; i<n; i++){
        cout<<min.top()<<" ";
        min.pop();
    //  in priority queue the greatest no . of all will be on the top
    }
    cout<<endl;





    return 0;
}