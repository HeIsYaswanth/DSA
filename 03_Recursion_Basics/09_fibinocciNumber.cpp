/*
Day-11 of DSA (17-08-2025)
Author: Yash
Program: Fininocci Number by recursion
*/
#include<bits/stdc++.h>
using namespace std;
int fibinocciNumber(int n){
    if(n<=1) return n;
    return fibinocciNumber(n-1)+fibinocciNumber(n-2);
}
                    
int main(){
    int num;
    cin>>num;
    cout<<fibinocciNumber(num);
            
}