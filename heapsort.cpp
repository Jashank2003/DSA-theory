//step 1 : build heap off array
//step 2 : swap last ele to first ele
// step 3 : heapify the first ele (means get that to its correct pos) remember your size will change always after swapping


#include<bits/stdc++.h>

using namespace std;

void heapify(int arr[] ,int n , int i){

    int largest = i ;
    int left = 2*i +1 ;
    int right = 2*i + 2;

    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n  && arr[largest] < arr[right]){
        largest = right;
    }
    
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapsort(int arr[] , int n){

    int size = n;
    while(size >0){
        swap(arr[0],arr[size-1]);
        size--;
        heapify(arr,size,0);
    }
}
int main(){
    
    int arr[6] = {34,23,5,2,53,233};
    int n = 6;

    for(int i = n/2-1 ; i>=0 ; i--){
        heapify(arr,n,i);
    }
    cout<<"after heapify: ";
    for(int i = 0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }

    heapsort(arr,n);
    cout<<endl;
    cout<<"after sort: ";
    for(int i = 0 ; i< n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}