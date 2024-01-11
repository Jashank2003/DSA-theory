#include<bits/stdc++.h>

using namespace std;

 void merge( int *arr , int s , int e){

    int mid = (s+e)/2;
    // int mid  = s + (e-s)/2;

    // spliting and making 2 new arrays 

    int len1 = mid - s +1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // copy value in first array

    int mainarrindex =s;
    for(int i = 0; i<len1 ; i++){
        first[i] = arr[mainarrindex++];
    }

    // copy value in second array 
     mainarrindex =mid+1;
    for(int i = 0; i<len2 ; i++){
        second[i] = arr[mainarrindex++];
    }

    // Now  merging 2 sorted array first and second

    int index1 =0 ;
    int index2 =0 ;
    mainarrindex = s;

    while( index1<len1 && index2<len2){

        if(first[index1]<second[index2]){
            arr[mainarrindex++] = first[index1++];
        }

         else{
            arr[mainarrindex++] = second[index2++];
        }
    }

        while( index1 <len1){
             arr[mainarrindex++] = first[index1++];
        }

        while( index2 <len2){
            arr[mainarrindex++] = second[index2++];
        }
 }

void mergesort(int *arr , int s, int e){

    // base
    if(s>=e){
        return ; 
    }
    // int mid  = s + (e-s)/2;
    int mid = (s+e)/2;
    // recursion
    // left
    mergesort( arr , s , mid);
    // right
    mergesort(arr , mid+1 , e);
    // now merging 2 sorted arrays
    merge(arr ,s ,e);

}

int main(){
    
    int arr[6] = { 45 ,2, 4, 32,46,2};
    int n = 6;

    mergesort( arr, 0 , n-1);

      for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}