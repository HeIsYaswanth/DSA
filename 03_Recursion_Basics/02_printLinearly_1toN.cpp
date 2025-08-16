/*
day10 of DSA (16-08-2025)
Author: Yash
Program: print linealy from 1 to N by recursion
*/
#include<bits/stdc++.h>
using namespace std;
void print1toN(int i, int n){
    if(i>n) return; 
    //if initial number is grater than n recusion stops means upto n only runs.
    cout<<i<<" ";
    print1toN(i+1,n);
    //calling recusive function by incrementing initial number
}
int main(){
    int n;
    cin>>n;
    print1toN(1,n); 
    //1 to n limits passing through the function
}