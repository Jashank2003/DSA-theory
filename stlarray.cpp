#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){


    array<int,4> arr={1,2,4,5};

    // < data type , size > name_of_array

    int n = arr.size();
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<" print the  data on the index given :"<<arr.at(1)<<endl;
    cout<<"give the front index value obj:"<<arr.front()<<endl;
    cout<<"give the last index value obj:"<<arr.back()<<endl;
    cout<<" Give boolean value  in 0 and 1 means empty false or true: "<<arr.empty();

    

    return 0;
}
