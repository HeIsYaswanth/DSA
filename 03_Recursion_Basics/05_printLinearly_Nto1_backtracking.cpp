/*
Day10 of DSA (16-08-2025)
Author : Yash
Program: Print numbers from n to 1 by backtracking recursion
*/
#include <bits/stdc++.h>
using namespace std;
void printNto1(int i,int n){
    //i= 1; n= let assume 3
    if(i>n) return;
    //recusion cancels if i>n 
    printNto1(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    printNto1(1,n);
    //print until 1 from n;
}