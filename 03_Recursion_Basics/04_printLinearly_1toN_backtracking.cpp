/*
day10 of DSA (16-08-2025)
Author: Yash
Program: print linealy from 1 to N by backtracking recursion
*/
#include<bits/stdc++.h>
using namespace std;
void print1toN(int n){
    if(n<1) return;
    //if i is less than 0 recursion stops.
    print1toN(n-1);
    //i-1 ex: n=3 --> (3)-->(2)-->(1)-->(0)
    cout<<n<<" ";
    //prints from back 1,2,3
}
int main(){
    int n;
    cin>>n;
    print1toN(n); 
    //n to n limits passing through the function
}