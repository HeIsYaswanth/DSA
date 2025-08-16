/*
day10 of DSA (16-08-2025)
Author: Yash
Program: print linealy from N to 1 by recursion
*/
#include<bits/stdc++.h>
using namespace std;
void printNto1(int n, int i){
    if(n==0) return; 
    //At n==0 recusion stops means upto 1 only runs.
    cout<<n<<" ";
    printNto1(n-1,i);
    //calling recusive function by decrementing n number
}
int main(){
    int n;
    cin>>n;
    printNto1(n,1); 
    //n to 1 limits passing through the function
}