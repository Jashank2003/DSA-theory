#include<iostream>

using namespace std;

 int selectionsort( int arr[] , int n){

    for (int i = 0 ; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1 ; j<n ; j++){

                 if(arr[minIndex]>arr[j]){
                     minIndex = j;
                  }

        swap  ( arr[minIndex] ,arr[i]);

        } 
        
    }
 }
 void printarray( int array[] , int n){
    
    for(int i = 0 ; i<n ; i++){
        cout<<array[i]<<" ";
    }
 }

int main(){
    
 int arr[5] = {64,11,5,3,2};
 selectionsort(arr , 5);
 printarray(arr , 5);

    return 0;
}