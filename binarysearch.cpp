#include<iostream>

using namespace std;
int binarysearch( int arr[], int n , int key){

    int s =0;
    int e = n-1;
    while(s<=e){
      int mid = (s+e)/2;   
      // mid also equals to this  s + (e-s)/2; more efficent
        if(arr[mid] == key){
            return mid;
             
        }
        else if(key>arr[mid]){
            s=mid +1;
        }
        else {
            e = mid -1;
        }
    }
    return -1;
}


int main(){
     int n;
     cout<<"Enter The size of array"<<endl;
     cin>>n;
     int arr[n];
     cout<<"enter the values"<<endl;
     for( int i=0; i<n ;i++){
        cin>>arr[i];

     }
     cout<<"Enter key to find"<<endl;
     int key;
     cin>>key;
      int index = binarysearch( arr ,n ,key);
      cout<<"index no for the key is "<<index;
    return 0;
}