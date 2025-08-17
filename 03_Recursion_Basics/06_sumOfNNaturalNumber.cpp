/*
Day-11 of DSA (17-08-2025)
Author: Yash
Program: Sum of N natural numbers
*/
#include<bits/stdc++.h>
using namespace std;
int sumOfNNaturalNumbers(int n){
    if(n==0) return 0;
    return n + sumOfNNaturalNumbers(n-1);
}
                    
int main(){
    int n;
    cin>>n;
    cout<<sumOfNNaturalNumbers(n);
            
}