#include<iostream>
using namespace std;

int main(){


    int i = 5 ; 
    int *p = &i;
    int **p2 = &p;

    cout<<"printing p "<<p<<endl;
    cout<<"printing p same adrres of i "<<&i<<endl;
    cout<< "address of p "<<&p<<endl;
    cout<<"value at p "<<*p<<endl;
    cout<<"*p2 "<<*p2<<endl;
    cout<<"**p2 "<<**p2<<endl;
    cout<<"p2 and &p2 "<<p2<<":"<<&p2<<endl;
}