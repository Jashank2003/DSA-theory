#include<bits/stdc++.h>

using namespace std;

    int partiton( int arr[]  , int s ,int e){

        // take a pivot 
        int pivot = arr[s];

        int cnt = 0 ; 

        for(int i = s+1 ; i<=e ; i++){
            if(arr[i]<=pivot){
                cnt++;
            }
        }

        int pivotindex = s + cnt; 
        swap(arr[pivotindex] , arr[s]);

        // checking this  <pivot | pivot | pivot>
        int i=s;
        int j=e;
        while( i< pivotindex && j>pivotindex){

            while(arr[i]<pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }

            if(i< pivotindex && j>pivotindex){
                swap(arr[i++], arr[j--]);
            }

        }

        return pivotindex;

    }


void quicksort(int arr[] , int s, int e){

    // base 
    if(s>=e){
        return ;
    }

    //  partition kro 
    int p = partiton( arr , s, e);

    // recursion now
    // left wala
    quicksort(arr , s , p-1);
    // right wala
    quicksort(arr , p+1 ,e);

    
}

int main(){
    
    int arr[5] = { 1,2,3,7,2};
    int n = 5;

    quicksort( arr , 0 , n-1);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}