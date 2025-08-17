/*
Day-11 of DSA (17-08-2025)
Author: Yash
Program: String Palindrome
*/
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string name,int i, int n){
    if(i>=n/2) return true;
    if(name[i]!=name[n-i-1]) return false;
    return isPalindrome(name,i+1,n);
}
                    
int main(){
    string name;
    cin>>name;
    int n= name.length();
    cout<<isPalindrome(name,0,n);
            
}