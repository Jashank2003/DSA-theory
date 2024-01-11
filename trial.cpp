#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        bool flag =false;
        int n;
        cin>>n;
        int a[n];
        for(int i =0 ;i<n ; i++){
            cin>>a[i];
        }
        
        for(int i = 0 ; i<n ;i++){
             int temp = a[i];
             
             for(int j =0 ; j<n ;j++){
                 
                 if(temp == a[j]   and i!=j){
                     flag =true;
                     break;
                 }
                 
             }
             if(flag == false){
                     cout<<temp<<endl;
                     break;
                 }
        }
        
    }
	return 0;
}
