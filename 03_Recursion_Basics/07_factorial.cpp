/*
Day-11 of DSA (17-08-2025)
Author: Yash
Program: Factorial of a number
*/
#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
                    
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);         
}