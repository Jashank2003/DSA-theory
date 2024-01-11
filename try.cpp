#include<iostream>

using namespace std;

int main(){
    int n;
    bool flag =true;
    cin>>n;
    string str[n];
    cin>>str[n];

    for(int i = 0 ; i<n ; i++){
        if(flag==false){
            break;
            cout<<"NO"<<endl;
        }

        for(int j = i ; j<4 ; j++){
            if( str[j] == "a" or "e" or "i" or "o" or "u"){
                flag =true;
                break;

            }
            else{
                flag=false;
                break;
            }

            }
         cout<<"YES"<<endl;
        }
    
    return 0;


}