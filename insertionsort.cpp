#include<iostream>
using namespace std;

void insertionsort( int arr[] , int n){

    for(int i=1 ; i<n; i++){
        int temp =arr[i];

        int j = i-1;
        for(;j>=0 ; j--){

            if(arr[j]>temp){
                // shift
                arr[j+1] =arr[j];

            }
            else{
                break;
            }
        
        }
        arr[j+1]=temp;
    }
}

void print(int arr[] ,int n){
 for(int i=0 ; i<n; i++){
    cout<<arr[i]<<" ";

   }
}

int main(){

   int n;
   cout<<"ENter the size of array"<<endl;
   cin>>n;
   int arr[n];
    cout<<"Enter the value"<<endl;
   for(int i=0 ; i<n; i++){
    cin>>arr[i];

   }
   insertionsort(arr , n);
   cout<<"Sorted array is :"<<endl;
   print( arr , n);
    return 0;
}

//     for(int i =0 ;i<n; i++){
//         int temp =arr[i];
//         int j = i-1;
// while(j>=0 && arr[j] > temp){
//                 arr[j+1] =arr[j];
//                 j= j-1;
    
// }
// arr[j+1] = temp;
//     }
    // }